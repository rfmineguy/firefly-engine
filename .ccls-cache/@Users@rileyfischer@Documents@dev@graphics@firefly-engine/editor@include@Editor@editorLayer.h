#ifndef EDITOR_LAYER_H
#define EDITOR_LAYER_H

#include "Rendering/window.h"

class EditorLayer {
    public:
        static void Init(Window*);
        static void Shutdown();
        static void BeginFrame();
        static void EndFrame();
        static void BeginDockspace();
        static void EndDockspace();

        static void ShowMenuBar();

        static Window* GetWindowPtr();
    private:
        static Window* windowPtr;
};

#endif
