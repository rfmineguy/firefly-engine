#include "Editor/panels/inspector_panel.h"
#include "Editor/editorData.h"
#include "Rendering/renderer.h"
#include "../../../vendor/imgui-docking/imgui.h"

std::string InspectorPanel::name = "InspectorPanel";
bool InspectorPanel::visible = true;
void InspectorPanel::Show() {
    if (!visible)
        return;
    ImGui::Begin(name.c_str());
    ImGui::Text("This is the inspector panel");
    ImGui::ColorEdit4("Clear Color", Renderer::clearColor);
    
    ImGui::End();
}
