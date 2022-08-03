#ifndef SHADER_H
#define SHADER_H
#include <string>

enum class ShaderType {
    VERTEX, FRAGMENT
};

class Shader {
    public:
        Shader(const std::string&, const std::string&);
        ~Shader();
        void Bind() const;
        void Unbind() const;

    private:
        void ProcessVertexShader(const std::string&);
        void ProcessFragmentShader(const std::string&);
        void LinkShaderProgram();

    private:
        unsigned int vertShaderID, fragShaderID; //temporary (won't exis passed initialization stage)
        unsigned int shaderProgramID;
};

#endif
