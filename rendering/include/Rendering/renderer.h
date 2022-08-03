#ifndef RENDERER_H
#define RENDERER_H
#include "framebuffer.h"
#include "shader.h"

enum class Test {
    A
};
enum class RenderMode {
    TWO_DIMENSION, THREE_DIMENSION
};

class Renderer {
public:
    static void TargetFramebuffer(Framebuffer*);
    static void TargetShader(Shader*);
    static void SetClearColor(float, float, float, float = 1.0f);
    static void Begin(RenderMode);
    static void Begin2D();
    static void Begin3D();
    static void End(RenderMode);
    static void End2D();
    static void End3D();
    static void DrawRect();

public:
    static RenderMode currentRenderMode;
    static bool isRenderBegan;
    static Framebuffer* targetFramebuffer;
    static Shader* targetShader;
    static float clearColor[4];
};

#endif
