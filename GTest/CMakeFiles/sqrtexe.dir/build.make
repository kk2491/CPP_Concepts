# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kk/Github/CPP_GTest/Example_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kk/Github/CPP_GTest/Example_1

# Include any dependencies generated for this target.
include CMakeFiles/sqrtexe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sqrtexe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sqrtexe.dir/flags.make

CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o: CMakeFiles/sqrtexe.dir/flags.make
CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o: sqrt_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kk/Github/CPP_GTest/Example_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o -c /home/kk/Github/CPP_GTest/Example_1/sqrt_test.cpp

CMakeFiles/sqrtexe.dir/sqrt_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sqrtexe.dir/sqrt_test.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kk/Github/CPP_GTest/Example_1/sqrt_test.cpp > CMakeFiles/sqrtexe.dir/sqrt_test.cpp.i

CMakeFiles/sqrtexe.dir/sqrt_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sqrtexe.dir/sqrt_test.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kk/Github/CPP_GTest/Example_1/sqrt_test.cpp -o CMakeFiles/sqrtexe.dir/sqrt_test.cpp.s

CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o.requires:

.PHONY : CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o.requires

CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o.provides: CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/sqrtexe.dir/build.make CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o.provides.build
.PHONY : CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o.provides

CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o.provides.build: CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o


# Object files for target sqrtexe
sqrtexe_OBJECTS = \
"CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o"

# External object files for target sqrtexe
sqrtexe_EXTERNAL_OBJECTS =

sqrtexe: CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o
sqrtexe: CMakeFiles/sqrtexe.dir/build.make
sqrtexe: /usr/lib/libgtest.a
sqrtexe: CMakeFiles/sqrtexe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kk/Github/CPP_GTest/Example_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sqrtexe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sqrtexe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sqrtexe.dir/build: sqrtexe

.PHONY : CMakeFiles/sqrtexe.dir/build

CMakeFiles/sqrtexe.dir/requires: CMakeFiles/sqrtexe.dir/sqrt_test.cpp.o.requires

.PHONY : CMakeFiles/sqrtexe.dir/requires

CMakeFiles/sqrtexe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sqrtexe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sqrtexe.dir/clean

CMakeFiles/sqrtexe.dir/depend:
	cd /home/kk/Github/CPP_GTest/Example_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kk/Github/CPP_GTest/Example_1 /home/kk/Github/CPP_GTest/Example_1 /home/kk/Github/CPP_GTest/Example_1 /home/kk/Github/CPP_GTest/Example_1 /home/kk/Github/CPP_GTest/Example_1/CMakeFiles/sqrtexe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sqrtexe.dir/depend

