#include <iostream>
#include "Rendering/window.h"
#include "Rendering/renderer.h"
#include "Core/file_util.h"
#include "Editor/editorLayer.h"
#include "Editor/editorData.h"
#include "Editor/panels/console_panel.h"
#include "Editor/panels/menu_bar_panel.h"
#include "Editor/panels/viewport_panel.h"
#include "Editor/panels/inspector_panel.h"
#include "Editor/panels/file_browser_panel.h"
#include "Editor/panels/heirarchy_panel.h"

#include "imgui-docking/imgui.h"

void imguiUpdate();

int main() {
    Window w;
    EditorData::Init();
    EditorLayer::Init(&w);
    ViewportPanel::Init();
    Renderer::SetClearColor(0.5f, 0.5f, 0.5f);
    Renderer::TargetFramebuffer(&ViewportPanel::framebuffer);
    w.Show(&imguiUpdate);
    EditorLayer::Shutdown();
}

void imguiUpdate() {
    EditorLayer::BeginFrame();
    EditorLayer::BeginDockspace();

    MenuBarPanel::Show();
    InspectorPanel::Show();
    ConsolePanel::Show();
    ViewportPanel::Show();
    HeirarchyPanel::Show();
    //FileBrowserPanel::Show();
    
    EditorLayer::EndDockspace();
    EditorLayer::EndFrame();
}
