cmake_minimum_required(VERSION 3.20)

message("========================")
message("        EDITOR")
message("========================")

project (firefly-engine-editor)

set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)

set (MAIN src/main.cpp)
set (PANEL_SOURCES 
    src/panels/console_panel.cpp
    src/panels/file_browser_panel.cpp
    src/panels/heirarchy_panel.cpp
    src/panels/inspector_panel.cpp
    src/panels/viewport_panel.cpp
    src/panels/menu_bar_panel.cpp
    )
set (EDITOR_SOURCES
    src/editorData.cpp
    src/editorLayer.cpp)

add_subdirectory(../core/ ${CMAKE_BINARY_DIR}/core/)
add_subdirectory(../rendering/ ${CMAKE_BINARY_DIR}/rendering/)
add_subdirectory(../vendor/imgui-docking/ ${CMAKE_BINARY_DIR}/imgui-docking/)

add_executable(firefly-engine-editor-exec ${MAIN} ${PANEL_SOURCES} ${EDITOR_SOURCES})
add_library(firefly-engine-editor-lib ${PANEL_SOURCES} ${EDITOR_SOURCES})

target_include_directories(firefly-engine-editor-exec PUBLIC ../vendor/imgui-docking/ ../editor/include/ ../core/include/ ../rendering/include/ )#../vendor/glfw/include/ ../vendor/glad/include/)
target_include_directories(firefly-engine-editor-lib PUBLIC ../vendor/imgui-docking/ ../editor/include/ ../core/include/ ../rendering/include/ )#../vendor/glfw/include/ ../vendor/glad/include/)

target_link_libraries(firefly-engine-editor-exec PRIVATE imgui firefly-engine-core-lib firefly-engine-rendering-lib)
target_link_libraries(firefly-engine-editor-lib PRIVATE imgui firefly-engine-core-lib firefly-engine-rendering-lib)
