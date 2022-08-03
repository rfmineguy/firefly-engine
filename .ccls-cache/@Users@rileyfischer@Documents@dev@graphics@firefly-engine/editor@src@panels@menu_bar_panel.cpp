#include "Editor/panels/menu_bar_panel.h"
#include "Editor/panels/console_panel.h"
#include "Editor/panels/heirarchy_panel.h"
#include "Editor/panels/viewport_panel.h"
#include "Editor/panels/inspector_panel.h"
#include "Editor/panels/file_browser_panel.h"
#include "../../vendor/imgui-docking/imgui.h"

void MenuBarPanel::Show() {
    if (ImGui::BeginMenuBar()) {
        if (ImGui::BeginMenu("File")) {
            if (ImGui::MenuItem("Close", NULL, false)) {
                EditorLayer::GetWindowPtr()->CloseWindow();
            }
            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Edit")) {
            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Layouts")) {
            if (ImGui::MenuItem("Default", NULL, false)) {
                EditorData::ChangeCurrentLayout(Layout::DEFAULT);
                ConsolePanel::Debug("Switched layout to 'Default'\n");
            }
            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Widget Toggle")) {
            ImGui::Checkbox("Toggle ConsolePanel", &ConsolePanel::visible);
            ImGui::Checkbox("Toggle ViewportPanel", &ViewportPanel::visible);
            ImGui::Checkbox("Toggle HeirarchyPanel", &HeirarchyPanel::visible);
            ImGui::Checkbox("Toggle InspectorPanel", &InspectorPanel::visible);
            ImGui::Checkbox("Toggle FileBrowserPanel", &FileBrowserPanel::visible);

            ImGui::EndMenu();
        }
        ImGui::EndMenuBar();
    }
}

void MenuBarPanel::DrawLayoutItem(const char* title, Layout layout) {
    if (ImGui::MenuItem(title, NULL, false)) {
        EditorData::ChangeCurrentLayout(layout);
        ConsolePanel::Debug("Switched to layout [%d]");
    }
}
