#ifndef MENU_BAR_PANEL_H
#define MENU_BAR_PANEL_H
#include "Editor/editorLayer.h"
#include "Editor/editorData.h"

class MenuBarPanel {
    public:
        static void Show();
    private:
        static void DrawLayoutItem(const char*, Layout);
};

#endif
