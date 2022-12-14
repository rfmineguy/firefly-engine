#ifndef VIEWPORT_PANEL_H
#define VIEWPORT_PANEL_H

#include <string>
#include "Rendering/framebuffer.h"
#include "Rendering/shader.h"
#include "imgui-docking/imgui.h"

class ViewportPanel {
    public:
        static void Show();
        static void Init();

    public:
        static bool visible;
        static std::string name;
        static Framebuffer framebuffer;
        static Shader shader;
        static ImVec2 last_size;
};

#endif
