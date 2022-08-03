#include "Editor/panels/file_browser_panel.h"
#include "../../../vendor/imgui-docking/imgui.h"

std::string FileBrowserPanel::name = "FileBrowserPanel";
bool FileBrowserPanel::visible = true;
void FileBrowserPanel::Show() {
    if (!visible)
        return;
    ImGui::Begin(name.c_str());

    ImGui::End();
}
