#include "Editor/panels/console_panel.h"

#include <iostream>

bool ConsolePanel::visible = true;
std::string ConsolePanel::name = "ConsolePanel";
ImGuiTextBuffer ConsolePanel::imTextBuf = ImGuiTextBuffer();
ImGuiTextFilter ConsolePanel::imTextFilter = ImGuiTextFilter();
ImVector<int> ConsolePanel::imLineOffsets = ImVector<int>();
bool ConsolePanel::autoScroll = true;

void ConsolePanel::Show() {
    if (!visible)
        return;
    ImGui::Begin(name.c_str());
    bool shouldClear = ImGui::Button("Clear");
    ImGui::SameLine();
    imTextFilter.Draw("Filter", -100.0f);

    ImGui::Separator();
    ImGui::BeginChild("scrolling", ImVec2(0, 0), false, ImGuiWindowFlags_HorizontalScrollbar);

    if (shouldClear)
        Clear();

    ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));
    const char* buf = imTextBuf.begin();
    const char* buf_end = imTextBuf.end();
    if (imTextFilter.IsActive()) {
        for (int i = 0; i < imLineOffsets.Size; i++) {
            const char* line_start = buf + imLineOffsets[i];
            const char* line_end = (i + 1 < imLineOffsets.Size) ? (buf + imLineOffsets[i + 1] - 1) : buf_end;
            if (imTextFilter.PassFilter(line_start, line_end))
                ImGui::TextUnformatted(line_start, line_end);
        }
    }
    else {
        ImGuiListClipper clipper;
        clipper.Begin(imLineOffsets.Size);
        while (clipper.Step()) {
            for (int i = clipper.DisplayStart; i < clipper.DisplayEnd; i++) {
                const char* line_start = buf + imLineOffsets[i];
                const char* line_end = (i + 1 < imLineOffsets.Size) ? (buf + imLineOffsets[i + 1] - 1) : buf_end;
                ImGui::TextUnformatted(line_start, line_end);
            }
        }
        clipper.End();
    }
    ImGui::PopStyleVar();
    if (autoScroll && ImGui::GetScrollY() >= ImGui::GetScrollMaxY())
        ImGui::SetScrollHereY(1.0f);
    
    ImGui::EndChild();
    ImGui::End();
}

void ConsolePanel::Warn(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);

    AddLog("[WARN] ", fmt, args);

    va_end(args);
}

void ConsolePanel::Debug(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);

    AddLog("[DEBUG] ", fmt, args);

    va_end(args);
}

void ConsolePanel::Error(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);

    AddLog("[ERROR] ", fmt, args);

    va_end(args);
}

void ConsolePanel::Critical(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);

    AddLog("[CRITICAL] ", fmt, args);

    va_end(args);
}

void ConsolePanel::AddLog(const char* prefix, const char* fmt, va_list args) {
    int oldSize = imTextBuf.size();
    imTextBuf.append(prefix);
    imTextBuf.appendfv(fmt, args);
    va_end(args);
    for (int newSize = imTextBuf.size(); oldSize < newSize; oldSize++) {
        if (imTextBuf[oldSize] == '\n')
            imLineOffsets.push_back(oldSize + 1);
    }
}

void ConsolePanel::Clear() {
    imTextBuf.clear();
    imLineOffsets.clear();
    imLineOffsets.push_back(0);
}
