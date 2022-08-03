#include "Editor/panels/heirarchy_panel.h"
#include "../../../vendor/imgui-docking/imgui.h"

bool HeirarchyPanel::visible = true;
std::string HeirarchyPanel::name = "HeirarchyPanel";
void HeirarchyPanel::Show() {
    if (!visible)
        return;
    ImGui::Begin(name.c_str());
        ImGui::Text("Hello world");
    ImGui::End();
}
