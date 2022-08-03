#ifndef CONSOLE_PANEL_H
#define CONSOLE_PANEL_H
#include <string>
#include "../../../vendor/imgui-docking/imgui.h"

/** CONSOLE PANEL OUTLINE
 *     Requirements:
 *      - able to output : [INFO, WARNING, ERROR] messages
 *      - able to filter these outputs
 *      - able to condense these outputs (like unity)
 *      - able to process certain commands
 */
class ConsolePanel {
    public:
        static void Show();

        static void Warn(const char*, ...);
        static void Debug(const char*, ...);
        static void Error(const char*, ...);
        static void Critical(const char*, ...);
        static void Clear();

    private:
        static void AddLog(const char*, const char*, va_list);

    public:
        static bool visible;
        static std::string name;

    private:
        static ImGuiTextBuffer imTextBuf;
        static ImGuiTextFilter imTextFilter;
        static ImVector<int>   imLineOffsets;
        static bool            autoScroll;
};
#endif
