# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4\build"

# Include any dependencies generated for this target.
include CMakeFiles/Lab_4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Lab_4.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab_4.dir/flags.make

CMakeFiles/Lab_4.dir/src/main.cpp.obj: CMakeFiles/Lab_4.dir/flags.make
CMakeFiles/Lab_4.dir/src/main.cpp.obj: CMakeFiles/Lab_4.dir/includes_CXX.rsp
CMakeFiles/Lab_4.dir/src/main.cpp.obj: ../src/main.cpp
CMakeFiles/Lab_4.dir/src/main.cpp.obj: CMakeFiles/Lab_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab_4.dir/src/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Lab_4.dir/src/main.cpp.obj -MF CMakeFiles\Lab_4.dir\src\main.cpp.obj.d -o CMakeFiles\Lab_4.dir\src\main.cpp.obj -c "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4\src\main.cpp"

CMakeFiles/Lab_4.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab_4.dir/src/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4\src\main.cpp" > CMakeFiles\Lab_4.dir\src\main.cpp.i

CMakeFiles/Lab_4.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab_4.dir/src/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4\src\main.cpp" -o CMakeFiles\Lab_4.dir\src\main.cpp.s

# Object files for target Lab_4
Lab_4_OBJECTS = \
"CMakeFiles/Lab_4.dir/src/main.cpp.obj"

# External object files for target Lab_4
Lab_4_EXTERNAL_OBJECTS =

Lab_4.exe: CMakeFiles/Lab_4.dir/src/main.cpp.obj
Lab_4.exe: CMakeFiles/Lab_4.dir/build.make
Lab_4.exe: libvectorlib.a
Lab_4.exe: CMakeFiles/Lab_4.dir/linklibs.rsp
Lab_4.exe: CMakeFiles/Lab_4.dir/objects1.rsp
Lab_4.exe: CMakeFiles/Lab_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab_4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lab_4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab_4.dir/build: Lab_4.exe
.PHONY : CMakeFiles/Lab_4.dir/build

CMakeFiles/Lab_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab_4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lab_4.dir/clean

CMakeFiles/Lab_4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4" "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4" "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4\build" "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4\build" "C:\Users\Professional\Desktop\MyRep\3821B1PM3_SuchkovVN_labs\Lab 4\build\CMakeFiles\Lab_4.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Lab_4.dir/depend

