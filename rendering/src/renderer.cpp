#include "Rendering/renderer.h"
#include "./../../vendor/glad/include/glad/glad.h"

Framebuffer* Renderer::targetFramebuffer = nullptr;
Shader* Renderer::targetShader = nullptr;
RenderMode Renderer::currentRenderMode = RenderMode::TWO_DIMENSION;
bool Renderer::isRenderBegan = false;
float Renderer::clearColor[4] = {0.5f};

void Renderer::TargetFramebuffer(Framebuffer* fb) {
    targetFramebuffer = fb;
}

void Renderer::TargetShader(Shader* sh) {
    targetShader = sh;
}

void Renderer::SetClearColor(float r, float g, float b, float a) {
    clearColor[0] = r;
    clearColor[1] = g;
    clearColor[2] = b;
    clearColor[3] = a;
}

void Renderer::Begin(RenderMode mode) {
    if (!targetFramebuffer)// || !targetShader)
        return;
    switch (mode) {
        case RenderMode::TWO_DIMENSION: Begin2D(); break;
        case RenderMode::THREE_DIMENSION: Begin3D(); break;
    }
    isRenderBegan = true;
    currentRenderMode = mode;
}

void Renderer::Begin2D() {
    targetFramebuffer->Bind();
    //targetShader->Bind();
    glClearColor(clearColor[0], clearColor[1], clearColor[2], clearColor[3]);
    glClear(GL_COLOR_BUFFER_BIT);
}

void Renderer::Begin3D() {
    targetFramebuffer->Bind();
}

void Renderer::End(RenderMode mode) {
    if (!targetFramebuffer)// || !targetShader)
        return;
    switch (mode) {
        case RenderMode::TWO_DIMENSION: End2D(); break;
        case RenderMode::THREE_DIMENSION: End3D(); break;
    }
    isRenderBegan = false;
    currentRenderMode = mode;
}

void Renderer::End2D() {
    if (!isRenderBegan || currentRenderMode != RenderMode::TWO_DIMENSION)
        return;

    targetFramebuffer->Unbind();
}

void Renderer::End3D() {
    if (!isRenderBegan || currentRenderMode != RenderMode::THREE_DIMENSION)
        return;

    targetFramebuffer->Unbind();
}

void Renderer::DrawRect() {

}
