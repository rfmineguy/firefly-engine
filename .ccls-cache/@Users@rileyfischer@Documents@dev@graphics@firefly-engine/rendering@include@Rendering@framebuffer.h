#ifndef FRAMEBUFFER_H
#define FRAMEBUFFER_H

class Framebuffer {
    public:
        Framebuffer();
        ~Framebuffer();
        void Resize(int, int);
        void Invalidate();
        void Bind();
        void Unbind();
        unsigned int GetColorAttachment() const;
        unsigned int GetWidth() const;
        unsigned int GetHeight() const;

    private:
        unsigned int width, height;
        unsigned int colorAttachmentId = 0;
        unsigned int depthAttachmentId = 0;
        unsigned int framebufferId = 0;
        unsigned int renderbufferId = 0;
};

#endif
