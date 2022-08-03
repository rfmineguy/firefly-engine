#include "Editor/panels/viewport_panel.h"
#include "Rendering/renderer.h"
#include "../../../vendor/glad/include/glad/glad.h"
#include "../../../vendor/imgui-docking/imgui.h"

bool ViewportPanel::visible = true;
std::string ViewportPanel::name = "ViewportPanel";
Framebuffer ViewportPanel::framebuffer = Framebuffer();
Shader ViewportPanel::shader = Shader("../res/default_shader.vert", "../res/default_shader.frag");
ImVec2 ViewportPanel::last_size = ImVec2();
void ViewportPanel::Show() {
    static bool firstTime = true;
    if (!visible)
        return;

    //Renderer::SetClearColor(0.1f, 0.14f, 0.3f);
    Renderer::Begin2D();

    Renderer::End2D();

    ImGui::Begin(name.c_str());
    ImVec2 viewportSize = ImGui::GetContentRegionAvail();

    if (last_size.x != viewportSize.x || last_size.y != viewportSize.y){
        printf("Resizing viewport\n");
        printf("ViewportSize {x:%0.4f, y:%0.4f}\n", viewportSize.x, viewportSize.y);
        printf("ClearColor {r:%0.4f,g:%0.4f,b:%0.4f,a:%0.4f}", Renderer::clearColor[0], Renderer::clearColor[1], Renderer::clearColor[2], Renderer::clearColor[3]);
        //framebuffer.Resize(viewportSize.x, viewportSize.y);
        last_size = {viewportSize.x, viewportSize.y};
    }

    ImGui::Image((void*)(intptr_t) framebuffer.GetColorAttachment(), viewportSize);

    ImGui::End();
}
