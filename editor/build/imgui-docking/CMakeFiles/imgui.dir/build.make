# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build

# Include any dependencies generated for this target.
include imgui-docking/CMakeFiles/imgui.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include imgui-docking/CMakeFiles/imgui.dir/compiler_depend.make

# Include the progress variables for this target.
include imgui-docking/CMakeFiles/imgui.dir/progress.make

# Include the compile flags for this target's objects.
include imgui-docking/CMakeFiles/imgui.dir/flags.make

imgui-docking/CMakeFiles/imgui.dir/imgui.cpp.o: imgui-docking/CMakeFiles/imgui.dir/flags.make
imgui-docking/CMakeFiles/imgui.dir/imgui.cpp.o: /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui.cpp
imgui-docking/CMakeFiles/imgui.dir/imgui.cpp.o: imgui-docking/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object imgui-docking/CMakeFiles/imgui.dir/imgui.cpp.o"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT imgui-docking/CMakeFiles/imgui.dir/imgui.cpp.o -MF CMakeFiles/imgui.dir/imgui.cpp.o.d -o CMakeFiles/imgui.dir/imgui.cpp.o -c /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui.cpp

imgui-docking/CMakeFiles/imgui.dir/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui.cpp.i"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui.cpp > CMakeFiles/imgui.dir/imgui.cpp.i

imgui-docking/CMakeFiles/imgui.dir/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui.cpp.s"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui.cpp -o CMakeFiles/imgui.dir/imgui.cpp.s

imgui-docking/CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.o: imgui-docking/CMakeFiles/imgui.dir/flags.make
imgui-docking/CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.o: /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/misc/cpp/imgui_stdlib.cpp
imgui-docking/CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.o: imgui-docking/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object imgui-docking/CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.o"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT imgui-docking/CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.o -MF CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.o.d -o CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.o -c /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/misc/cpp/imgui_stdlib.cpp

imgui-docking/CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.i"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/misc/cpp/imgui_stdlib.cpp > CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.i

imgui-docking/CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.s"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/misc/cpp/imgui_stdlib.cpp -o CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.s

imgui-docking/CMakeFiles/imgui.dir/imgui_demo.cpp.o: imgui-docking/CMakeFiles/imgui.dir/flags.make
imgui-docking/CMakeFiles/imgui.dir/imgui_demo.cpp.o: /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_demo.cpp
imgui-docking/CMakeFiles/imgui.dir/imgui_demo.cpp.o: imgui-docking/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object imgui-docking/CMakeFiles/imgui.dir/imgui_demo.cpp.o"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT imgui-docking/CMakeFiles/imgui.dir/imgui_demo.cpp.o -MF CMakeFiles/imgui.dir/imgui_demo.cpp.o.d -o CMakeFiles/imgui.dir/imgui_demo.cpp.o -c /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_demo.cpp

imgui-docking/CMakeFiles/imgui.dir/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui_demo.cpp.i"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_demo.cpp > CMakeFiles/imgui.dir/imgui_demo.cpp.i

imgui-docking/CMakeFiles/imgui.dir/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui_demo.cpp.s"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_demo.cpp -o CMakeFiles/imgui.dir/imgui_demo.cpp.s

imgui-docking/CMakeFiles/imgui.dir/imgui_draw.cpp.o: imgui-docking/CMakeFiles/imgui.dir/flags.make
imgui-docking/CMakeFiles/imgui.dir/imgui_draw.cpp.o: /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_draw.cpp
imgui-docking/CMakeFiles/imgui.dir/imgui_draw.cpp.o: imgui-docking/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object imgui-docking/CMakeFiles/imgui.dir/imgui_draw.cpp.o"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT imgui-docking/CMakeFiles/imgui.dir/imgui_draw.cpp.o -MF CMakeFiles/imgui.dir/imgui_draw.cpp.o.d -o CMakeFiles/imgui.dir/imgui_draw.cpp.o -c /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_draw.cpp

imgui-docking/CMakeFiles/imgui.dir/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui_draw.cpp.i"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_draw.cpp > CMakeFiles/imgui.dir/imgui_draw.cpp.i

imgui-docking/CMakeFiles/imgui.dir/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui_draw.cpp.s"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_draw.cpp -o CMakeFiles/imgui.dir/imgui_draw.cpp.s

imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.o: imgui-docking/CMakeFiles/imgui.dir/flags.make
imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.o: /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/backends/imgui_impl_glfw.cpp
imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.o: imgui-docking/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.o"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.o -MF CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.o.d -o CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.o -c /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/backends/imgui_impl_glfw.cpp

imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.i"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/backends/imgui_impl_glfw.cpp > CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.i

imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.s"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/backends/imgui_impl_glfw.cpp -o CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.s

imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.o: imgui-docking/CMakeFiles/imgui.dir/flags.make
imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.o: /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/backends/imgui_impl_opengl3.cpp
imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.o: imgui-docking/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.o"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.o -MF CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.o.d -o CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.o -c /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/backends/imgui_impl_opengl3.cpp

imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.i"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/backends/imgui_impl_opengl3.cpp > CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.i

imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.s"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/backends/imgui_impl_opengl3.cpp -o CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.s

imgui-docking/CMakeFiles/imgui.dir/imgui_tables.cpp.o: imgui-docking/CMakeFiles/imgui.dir/flags.make
imgui-docking/CMakeFiles/imgui.dir/imgui_tables.cpp.o: /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_tables.cpp
imgui-docking/CMakeFiles/imgui.dir/imgui_tables.cpp.o: imgui-docking/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object imgui-docking/CMakeFiles/imgui.dir/imgui_tables.cpp.o"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT imgui-docking/CMakeFiles/imgui.dir/imgui_tables.cpp.o -MF CMakeFiles/imgui.dir/imgui_tables.cpp.o.d -o CMakeFiles/imgui.dir/imgui_tables.cpp.o -c /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_tables.cpp

imgui-docking/CMakeFiles/imgui.dir/imgui_tables.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui_tables.cpp.i"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_tables.cpp > CMakeFiles/imgui.dir/imgui_tables.cpp.i

imgui-docking/CMakeFiles/imgui.dir/imgui_tables.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui_tables.cpp.s"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_tables.cpp -o CMakeFiles/imgui.dir/imgui_tables.cpp.s

imgui-docking/CMakeFiles/imgui.dir/imgui_widgets.cpp.o: imgui-docking/CMakeFiles/imgui.dir/flags.make
imgui-docking/CMakeFiles/imgui.dir/imgui_widgets.cpp.o: /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_widgets.cpp
imgui-docking/CMakeFiles/imgui.dir/imgui_widgets.cpp.o: imgui-docking/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object imgui-docking/CMakeFiles/imgui.dir/imgui_widgets.cpp.o"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT imgui-docking/CMakeFiles/imgui.dir/imgui_widgets.cpp.o -MF CMakeFiles/imgui.dir/imgui_widgets.cpp.o.d -o CMakeFiles/imgui.dir/imgui_widgets.cpp.o -c /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_widgets.cpp

imgui-docking/CMakeFiles/imgui.dir/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui_widgets.cpp.i"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_widgets.cpp > CMakeFiles/imgui.dir/imgui_widgets.cpp.i

imgui-docking/CMakeFiles/imgui.dir/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui_widgets.cpp.s"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking/imgui_widgets.cpp -o CMakeFiles/imgui.dir/imgui_widgets.cpp.s

# Object files for target imgui
imgui_OBJECTS = \
"CMakeFiles/imgui.dir/imgui.cpp.o" \
"CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.o" \
"CMakeFiles/imgui.dir/imgui_demo.cpp.o" \
"CMakeFiles/imgui.dir/imgui_draw.cpp.o" \
"CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.o" \
"CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.o" \
"CMakeFiles/imgui.dir/imgui_tables.cpp.o" \
"CMakeFiles/imgui.dir/imgui_widgets.cpp.o"

# External object files for target imgui
imgui_EXTERNAL_OBJECTS =

imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/imgui.cpp.o
imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/misc/cpp/imgui_stdlib.cpp.o
imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/imgui_demo.cpp.o
imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/imgui_draw.cpp.o
imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_glfw.cpp.o
imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/backends/imgui_impl_opengl3.cpp.o
imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/imgui_tables.cpp.o
imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/imgui_widgets.cpp.o
imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/build.make
imgui-docking/libimgui.a: imgui-docking/CMakeFiles/imgui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX static library libimgui.a"
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && $(CMAKE_COMMAND) -P CMakeFiles/imgui.dir/cmake_clean_target.cmake
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imgui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
imgui-docking/CMakeFiles/imgui.dir/build: imgui-docking/libimgui.a
.PHONY : imgui-docking/CMakeFiles/imgui.dir/build

imgui-docking/CMakeFiles/imgui.dir/clean:
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking && $(CMAKE_COMMAND) -P CMakeFiles/imgui.dir/cmake_clean.cmake
.PHONY : imgui-docking/CMakeFiles/imgui.dir/clean

imgui-docking/CMakeFiles/imgui.dir/depend:
	cd /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor /Users/rileyfischer/Documents/dev/graphics/firefly-engine/vendor/imgui-docking /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking /Users/rileyfischer/Documents/dev/graphics/firefly-engine/editor/build/imgui-docking/CMakeFiles/imgui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : imgui-docking/CMakeFiles/imgui.dir/depend
