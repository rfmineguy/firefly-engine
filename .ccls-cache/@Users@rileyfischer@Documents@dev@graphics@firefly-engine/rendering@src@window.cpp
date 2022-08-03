#include "Rendering/window.h"
#include "Editor/editorData.h"
#include "GLFW/glfw3.h"
#include "glad/glad.h"

Window::Window() {
    Init();
}

Window::~Window() {}

//private
int Window::Init() {

    if (!glfwInit()) {
        printf("glfw not initialized\n");
    }
    else {
        printf("glfw initialized\n");
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    //glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);
    glfwSetErrorCallback(glfwErrorCallback);

    windowPtr = glfwCreateWindow(800, 600, "Window", NULL, NULL);
    if (!windowPtr) {
        std::cerr << "Failed to initialize window\n";
        return -1;
    }

    glfwMakeContextCurrent(windowPtr);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize glad\n";
        return -1;
    }

    glViewport(0, 0, 800, 600);
    glfwSetFramebufferSizeCallback(windowPtr, framebuffer_size_callback);

    // checking to see if glfwWindow 
    //     - glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);
    // did what it was supposed to
    //int flags;
    //glGetIntegerv(GL_CONTEXT_FLAGS, &flags);
    //if (flags & GL_CONTEXT_FLAG_DEBUG_BIT) {
    //    glEnable(GL_DEBUG_OUTPUT);
    //    glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);
    //    glDebugMessageCallback(glDebugOutput, nullptr);
    //    glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, GL_DONT_CARE, 0, nullptr, GL_TRUE);
    //    std::cout << "Successfully set up debugging context\n";
    //}
    //else {
    //    std::cerr << "Failed to set up debugging context\n";
    //    std::cerr << glGetError() << "\n";
    //}

    //glDebugMessageCallbackARB(glDebugOutput, nullptr);
    std::cout << "Window successfully initialized\n";
    printf("windowPtr = %p\n", windowPtr);
    
    return 0;
}

void Window::Show(std::function<void(void)> imguiUpdate) {
    while (!glfwWindowShouldClose(windowPtr)) {
        //glClearColor(0.5f, 0.3f, 0.9f, 1.0f);
        //glClear(GL_COLOR_BUFFER_BIT);
        imguiUpdate();
        glfwSwapBuffers(windowPtr);
        glfwPollEvents();
    }
}

void Window::CloseWindow() const {
    glfwSetWindowShouldClose(windowPtr, true);
}

void Window::framebuffer_size_callback(GLFWwindow* windowPtr, int width, int height) {
    glViewport(0, 0, width, height);
    EditorData::RefreshCurrentLayout();
}

void Window::glfwErrorCallback(int error, const char* message){ 
    printf("GLFW Error %s\n", message);
}

void APIENTRY Window::glDebugOutput(GLenum source, GLenum type, unsigned int id, GLenum severity, GLsizei length, const char* message, const void* userParam) {
    // ignore non-significant error/warning codes
    if(id == 131169 || id == 131185 || id == 131218 || id == 131204) return; 

    std::cout << "---------------" << std::endl;
    std::cout << "Debug message (" << id << "): " <<  message << std::endl;
}

GLFWwindow* Window::GetWindowPtr() const {
    return windowPtr;
}
