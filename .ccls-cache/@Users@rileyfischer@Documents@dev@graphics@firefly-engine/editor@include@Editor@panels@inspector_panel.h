#ifndef INSPECTOR_PANEL_H
#define INSPECTOR_PANEL_H
#include <string>

class InspectorPanel {
    public:
        static void Show();

    public:
        static bool visible;
        static std::string name;
};

#endif
