#ifndef RENDERING_WINDOW_H
#define RENDERING_WINDOW_H

#include "framebuffer.h"
#include <iostream>
#include <vector>
#include <functional>
#include "glad/glad.h"
#include "GLFW/glfw3.h"


class Window {
    public:
        Window();
        ~Window();
        void Show(std::function<void(void)>);
        GLFWwindow* GetWindowPtr() const;
        void CloseWindow() const;

    private:
        int Init();
        static void framebuffer_size_callback(GLFWwindow*, int, int);
        static void glfwErrorCallback(int, const char*);
        static void APIENTRY glDebugOutput(GLenum, GLenum, unsigned int, GLenum, GLsizei, const char*, const void*);

    private:
        GLFWwindow* windowPtr;
};

#endif
