#ifndef DEFAULT_LAYOUT_H
#define DEFAULT_LAYOUT_H
#include "imgui.h"
#include "imgui_internal.h"
#include "../panels/viewport_panel.h"
#include "../panels/heirarchy_panel.h"
#include "../panels/console_panel.h"
#include "../panels/inspector_panel.h"

class DefaultLayout {
    public:
        static void Choose(ImGuiID& dockspaceId, ImGuiDockNodeFlags dockspace_flags) {
            ImGui::DockBuilderRemoveNode(dockspaceId);
            ImGui::DockBuilderAddNode(dockspaceId, dockspace_flags | ImGuiDockNodeFlags_DockSpace);
            ImGui::DockBuilderSetNodeSize(dockspaceId, ImGui::GetMainViewport()->Size);
            
            /*  +================================+
             *  |      |                  |      |
             *  |      |                  |      |
             *  |      |        V         |      |
             *  |      |                  |      |
             *  |  H   |                  |  I   |
             *  |      |                  |      |
             *  |      |==================|      |
             *  |      |        C         |      |
             *  +================================+
             */

            ImGuiID left = ImGui::DockBuilderSplitNode(dockspaceId, ImGuiDir_Left, 1.0f, nullptr, &dockspaceId);
            ImGuiID center = ImGui::DockBuilderSplitNode(left, ImGuiDir_Right, 0.9f, nullptr, &left);
            ImGuiID right = ImGui::DockBuilderSplitNode(center, ImGuiDir_Right, 0.1f, nullptr, &center);
            ImGuiID bottom_center = ImGui::DockBuilderSplitNode(center, ImGuiDir_Down, 0.2f, nullptr, &center);

            ImGui::DockBuilderDockWindow(HeirarchyPanel::name.c_str(), left);
            ImGui::DockBuilderDockWindow(ViewportPanel::name.c_str(), center);
            ImGui::DockBuilderDockWindow(ConsolePanel::name.c_str(), bottom_center);
            ImGui::DockBuilderDockWindow(InspectorPanel::name.c_str(), right);

            ImGui::DockBuilderFinish(dockspaceId);
        };
};
#endif
