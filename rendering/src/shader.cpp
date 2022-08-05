#include "Rendering/shader.h"
#include "Core/file_util.h"
#include "glad/glad.h"
#include <fstream>
#include <sstream>

Shader::Shader(const std::string& vert_path, const std::string& frag_path) {
    ProcessVertexShader(vert_path);
    ProcessFragmentShader(frag_path);
    //LinkShaderProgram();
    printf("Shader construction complete [NOT VALID CURRENTLY]\n");
}

Shader::~Shader() {
    glDeleteProgram(shaderProgramID);
}

void Shader::Bind() const {
    glUseProgram(shaderProgramID);
}

void Shader::Unbind() const {
    glUseProgram(0);
}

void Shader::ProcessVertexShader(const std::string& path) {
    printf("Processing vert shader: %s\n", path.c_str());
    std::string contents = FileUtil::ReadFile(path);

    const char* shaderSource;
    shaderSource = contents.c_str();
    printf("Shader source:\n%s\n", shaderSource);

    vertShaderID = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertShaderID, 1, &shaderSource, NULL);
    printf("%d\n", glGetError());

    glCompileShader(vertShaderID);
    printf("Compiled vertex shader\n");

    int success;
    char infoLog[512];
    glGetShaderiv(vertShaderID, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(vertShaderID, 512, NULL, infoLog);
        printf("Compile error: Vertex shader: %s\n", infoLog);
    }
    else {
    }

}

void Shader::ProcessFragmentShader(const std::string& path) {
    printf("Processing frag shader: %s\n", path.c_str());
    std::string contents = FileUtil::ReadFile(path);
    printf("%s\n", contents.c_str());
    const char* contents_c = contents.c_str();
    fragShaderID = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragShaderID, 1, &contents_c, NULL);
    glCompileShader(fragShaderID);

    int success;
    char infoLog[512];
    glGetShaderiv(fragShaderID, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(fragShaderID, 512, NULL, infoLog);
        printf("Compile error: Fragment shader: %s\n", infoLog);
    }
}

void Shader::LinkShaderProgram() {
    int success;
    char infoLog[512];
    shaderProgramID = glCreateProgram();
    glAttachShader(shaderProgramID, vertShaderID);
    glAttachShader(shaderProgramID, fragShaderID);
    glLinkProgram(shaderProgramID);
    glGetShaderiv(shaderProgramID, GL_LINK_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(shaderProgramID, 512, NULL, infoLog);
        printf("Failed to link shader PROGRAM [%s]\n", infoLog);
    }
    Bind();
    glDeleteShader(vertShaderID);
    glDeleteShader(fragShaderID);
    printf("Linked shader program\n");
}
