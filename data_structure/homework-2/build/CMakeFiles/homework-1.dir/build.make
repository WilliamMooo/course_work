# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\build

# Include any dependencies generated for this target.
include CMakeFiles/homework-1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homework-1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework-1.dir/flags.make

CMakeFiles/homework-1.dir/src/main.cpp.obj: CMakeFiles/homework-1.dir/flags.make
CMakeFiles/homework-1.dir/src/main.cpp.obj: CMakeFiles/homework-1.dir/includes_CXX.rsp
CMakeFiles/homework-1.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework-1.dir/src/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homework-1.dir\src\main.cpp.obj -c C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\src\main.cpp

CMakeFiles/homework-1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework-1.dir/src/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\src\main.cpp > CMakeFiles\homework-1.dir\src\main.cpp.i

CMakeFiles/homework-1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework-1.dir/src/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\src\main.cpp -o CMakeFiles\homework-1.dir\src\main.cpp.s

CMakeFiles/homework-1.dir/src/sqStack.cpp.obj: CMakeFiles/homework-1.dir/flags.make
CMakeFiles/homework-1.dir/src/sqStack.cpp.obj: CMakeFiles/homework-1.dir/includes_CXX.rsp
CMakeFiles/homework-1.dir/src/sqStack.cpp.obj: ../src/sqStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/homework-1.dir/src/sqStack.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homework-1.dir\src\sqStack.cpp.obj -c C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\src\sqStack.cpp

CMakeFiles/homework-1.dir/src/sqStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework-1.dir/src/sqStack.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\src\sqStack.cpp > CMakeFiles\homework-1.dir\src\sqStack.cpp.i

CMakeFiles/homework-1.dir/src/sqStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework-1.dir/src/sqStack.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\src\sqStack.cpp -o CMakeFiles\homework-1.dir\src\sqStack.cpp.s

# Object files for target homework-1
homework__1_OBJECTS = \
"CMakeFiles/homework-1.dir/src/main.cpp.obj" \
"CMakeFiles/homework-1.dir/src/sqStack.cpp.obj"

# External object files for target homework-1
homework__1_EXTERNAL_OBJECTS =

bin/homework-1.exe: CMakeFiles/homework-1.dir/src/main.cpp.obj
bin/homework-1.exe: CMakeFiles/homework-1.dir/src/sqStack.cpp.obj
bin/homework-1.exe: CMakeFiles/homework-1.dir/build.make
bin/homework-1.exe: CMakeFiles/homework-1.dir/linklibs.rsp
bin/homework-1.exe: CMakeFiles/homework-1.dir/objects1.rsp
bin/homework-1.exe: CMakeFiles/homework-1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable bin\homework-1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\homework-1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework-1.dir/build: bin/homework-1.exe

.PHONY : CMakeFiles/homework-1.dir/build

CMakeFiles/homework-1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\homework-1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/homework-1.dir/clean

CMakeFiles/homework-1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2 C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2 C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\build C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\build C:\Users\96101\Desktop\codes\course_work\data_structure\homework-2\build\CMakeFiles\homework-1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/homework-1.dir/depend

