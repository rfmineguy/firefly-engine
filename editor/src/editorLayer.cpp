#include "Editor/editorLayer.h"
#include "Editor/editorData.h"
#include "Editor/layouts/default.h"
#include "imgui.h"
#include "backends/imgui_impl_opengl3.h"
#include "backends/imgui_impl_glfw.h"
#include <iostream>

Window* EditorLayer::windowPtr = NULL;
void EditorLayer::Init(Window* window) {
    windowPtr = window;
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui::StyleColorsDark();

    ImGui_ImplGlfw_InitForOpenGL(window->GetWindowPtr(), true);
    ImGui_ImplOpenGL3_Init("#version 410");
    printf("Initialized IMGui\n");

    EditorData::ChangeCurrentLayout(Layout::DEFAULT);
}
void EditorLayer::Shutdown() {
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
}
void EditorLayer::BeginFrame() {
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
}
void EditorLayer::EndFrame() {
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

void EditorLayer::BeginDockspace() {
    static bool optFullscreen = true;
    static bool isDockspaceOpen = true;
    static bool optPadding = false;

    static ImGuiDockNodeFlags dockspace_flags = ImGuiDockNodeFlags_None;

    ImGuiWindowFlags window_flags = ImGuiWindowFlags_MenuBar | ImGuiWindowFlags_NoDocking;
    if (optFullscreen) {
        const ImGuiViewport* viewport = ImGui::GetMainViewport();
        ImGui::SetNextWindowPos(viewport->WorkPos);
        ImGui::SetNextWindowSize(viewport->WorkSize);
        ImGui::SetNextWindowViewport(viewport->ID);
        ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);
        ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
          
        window_flags |= ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove;
        window_flags |= ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoNavFocus;
    }
    else {
        dockspace_flags &= ~ImGuiDockNodeFlags_PassthruCentralNode;
    }
    if (dockspace_flags & ImGuiDockNodeFlags_PassthruCentralNode)
        window_flags |= ImGuiWindowFlags_NoBackground;

    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 1);
    ImGui::Begin("EditorDockspaceBegin", &isDockspaceOpen, window_flags);

    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
    if (io.ConfigFlags & ImGuiConfigFlags_DockingEnable) {
        ImGuiID dockspace_id = ImGui::GetID("EditorDockspace");
        ImGui::DockSpace(dockspace_id, ImVec2(0.0f, 0.0f), dockspace_flags);
       
        // Choose layout
        if (EditorData::LayoutChanged()) {
            switch (EditorData::GetCurrentLayout()) {
            case Layout::DEFAULT:
                DefaultLayout::Choose(dockspace_id, dockspace_flags);
                break;
            case Layout::ALTERNATE:
                break;
            default:
                break;
            }
            EditorData::SetLayoutChanged(false);
        }
    }

    ImGuiStyle& style = ImGui::GetStyle();
    style.WindowMenuButtonPosition = 2;
}

void EditorLayer::EndDockspace() {
    ImGui::End();
    ImGui::PopStyleVar();
}

Window* EditorLayer::GetWindowPtr() {
    return windowPtr;
}
