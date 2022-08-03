#include "Rendering/framebuffer.h"
#include "../../vendor/glad/include/glad/glad.h"        //did this so that vim would stop begin ALL red for glad calls
#include <iostream>

Framebuffer::Framebuffer() {}

Framebuffer::~Framebuffer() {
    glDeleteTextures(1, &colorAttachmentId);
    glDeleteTextures(1, &depthAttachmentId);
    glDeleteFramebuffers(1, &framebufferId);
}

void Framebuffer::Resize(int newWidth, int newHeight) {
    width = newWidth;
    height = newHeight;
    Invalidate();
}

void Framebuffer::Invalidate() {
    if (framebufferId) {
        glDeleteFramebuffers(1, &framebufferId);
        glDeleteTextures(1, &colorAttachmentId);
        glDeleteTextures(1, &depthAttachmentId);
        printf("Framebuffer deleted\n");
    }

    glGenFramebuffers(1, &framebufferId);
    Bind();
    
    // create color texture
    glGenTextures(1, &colorAttachmentId);
    glBindTexture(GL_TEXTURE_2D, colorAttachmentId);

    // setup color texture
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    
    // attach the color texture to the framebuffer
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, colorAttachmentId, 0);

    // create depth texture
    // glGenTextures(1, &depthAttachmentId);
    // glBindTexture(GL_TEXTURE_2D, depthAttachmentId);
    // glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH24_STENCIL8, width, height, 0, GL_DEPTH_STENCIL, GL_UNSIGNED_INT_24_8, nullptr);
    // glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, GL_TEXTURE_2D, depthAttachmentId, 0);

    //  create renderbuffer
    glGenRenderbuffers(1, &renderbufferId);
    glBindRenderbuffer(GL_RENDERBUFFER, renderbufferId);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8, width, height);

    //  check status of framebuffer
    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
        printf("Incomplete framebuffer, %d\n", glGetError());
    }
    Unbind();
    printf("Framebuffer constructed\n");
    printf("colorAttachmentId : %i\n", colorAttachmentId);
    //printf("depthAttachmentId : %i\n\n", depthAttachmentId);
    printf("Error : %d\n", glGetError());
}

void Framebuffer::Bind() {
    glBindFramebuffer(GL_FRAMEBUFFER, framebufferId);
}

void Framebuffer::Unbind() {
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
}

unsigned int Framebuffer::GetColorAttachment() const {
    return colorAttachmentId;
}
unsigned int Framebuffer::GetWidth() const {
    return width;
}
unsigned int Framebuffer::GetHeight() const {
    return height;
}
