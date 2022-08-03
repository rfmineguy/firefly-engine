cmake_minimum_required(VERSION 3.20)

message("========================")
message("       RENDERING")
message("========================")

project(firefly-engine-rendering)

set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)

set (MAIN src/main.cpp)
set (SOURCES src/window.cpp src/renderer.cpp src/framebuffer.cpp src/shader.cpp)

add_subdirectory(../vendor/glfw/ ${CMAKE_BINARY_DIR}/glfw/)
add_subdirectory(../vendor/glad/ ${CMAKE_BINARY_DIR}/glad/)

#add_executable(firefly-engine-rendering-exec ${MAIN} ${SOURCES})
add_library(firefly-engine-rendering-lib ${SOURCES})

#target_include_directories(firefly-engine-rendering-exec PUBLIC ../rendering/include/ ../editor/include/ ../core/include/ ../vendor/glad/include/ ../vendor/glfw/include/)
target_include_directories(firefly-engine-rendering-lib PUBLIC ../rendering/include/ ../editor/include/ ../core/include/ ../vendor/glad/include/ ../vendor/glfw/include/ )

#target_link_libraries(firefly-engine-rendering-exec PRIVATE glfw glad)
target_link_libraries(firefly-engine-rendering-lib PRIVATE glfw glad)
