#ifndef EDITOR_DATA_H
#define EDITOR_DATA_H
#include <iostream>

enum class Layout {
    NONE, DEFAULT, ALTERNATE
};

class EditorData {
public:
    static EditorData& Instance() {
        static EditorData EditorData;
        return EditorData;
    }
    static void Init() {
        ChangeCurrentLayout(Layout::DEFAULT);
    }
    static void ChangeCurrentLayout(Layout layout) {
        Instance().selectedLayout = layout;
        SetLayoutChanged(true);
        printf("Changed layout\n");
    }
    static void RefreshCurrentLayout() {
        ChangeCurrentLayout(GetCurrentLayout());
    }
    static Layout GetCurrentLayout() {
        return Instance().selectedLayout;
    }
    static void SetLayoutChanged(bool value) {
        Instance().layoutChanged = value;
    }
    static bool LayoutChanged() {
        return Instance().layoutChanged;
    }

private:
    Layout selectedLayout;
    bool layoutChanged;
};

#endif
