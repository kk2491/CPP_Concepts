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
CMAKE_SOURCE_DIR = /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program

# Include any dependencies generated for this target.
include CMakeFiles/sample_prog.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sample_prog.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sample_prog.dir/flags.make

CMakeFiles/sample_prog.dir/src/main.cc.o: CMakeFiles/sample_prog.dir/flags.make
CMakeFiles/sample_prog.dir/src/main.cc.o: src/main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sample_prog.dir/src/main.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sample_prog.dir/src/main.cc.o -c /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/src/main.cc

CMakeFiles/sample_prog.dir/src/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample_prog.dir/src/main.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/src/main.cc > CMakeFiles/sample_prog.dir/src/main.cc.i

CMakeFiles/sample_prog.dir/src/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample_prog.dir/src/main.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/src/main.cc -o CMakeFiles/sample_prog.dir/src/main.cc.s

CMakeFiles/sample_prog.dir/src/main.cc.o.requires:

.PHONY : CMakeFiles/sample_prog.dir/src/main.cc.o.requires

CMakeFiles/sample_prog.dir/src/main.cc.o.provides: CMakeFiles/sample_prog.dir/src/main.cc.o.requires
	$(MAKE) -f CMakeFiles/sample_prog.dir/build.make CMakeFiles/sample_prog.dir/src/main.cc.o.provides.build
.PHONY : CMakeFiles/sample_prog.dir/src/main.cc.o.provides

CMakeFiles/sample_prog.dir/src/main.cc.o.provides.build: CMakeFiles/sample_prog.dir/src/main.cc.o


CMakeFiles/sample_prog.dir/src/speak.cc.o: CMakeFiles/sample_prog.dir/flags.make
CMakeFiles/sample_prog.dir/src/speak.cc.o: src/speak.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sample_prog.dir/src/speak.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sample_prog.dir/src/speak.cc.o -c /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/src/speak.cc

CMakeFiles/sample_prog.dir/src/speak.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample_prog.dir/src/speak.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/src/speak.cc > CMakeFiles/sample_prog.dir/src/speak.cc.i

CMakeFiles/sample_prog.dir/src/speak.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample_prog.dir/src/speak.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/src/speak.cc -o CMakeFiles/sample_prog.dir/src/speak.cc.s

CMakeFiles/sample_prog.dir/src/speak.cc.o.requires:

.PHONY : CMakeFiles/sample_prog.dir/src/speak.cc.o.requires

CMakeFiles/sample_prog.dir/src/speak.cc.o.provides: CMakeFiles/sample_prog.dir/src/speak.cc.o.requires
	$(MAKE) -f CMakeFiles/sample_prog.dir/build.make CMakeFiles/sample_prog.dir/src/speak.cc.o.provides.build
.PHONY : CMakeFiles/sample_prog.dir/src/speak.cc.o.provides

CMakeFiles/sample_prog.dir/src/speak.cc.o.provides.build: CMakeFiles/sample_prog.dir/src/speak.cc.o


# Object files for target sample_prog
sample_prog_OBJECTS = \
"CMakeFiles/sample_prog.dir/src/main.cc.o" \
"CMakeFiles/sample_prog.dir/src/speak.cc.o"

# External object files for target sample_prog
sample_prog_EXTERNAL_OBJECTS =

sample_prog: CMakeFiles/sample_prog.dir/src/main.cc.o
sample_prog: CMakeFiles/sample_prog.dir/src/speak.cc.o
sample_prog: CMakeFiles/sample_prog.dir/build.make
sample_prog: CMakeFiles/sample_prog.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sample_prog"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sample_prog.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sample_prog.dir/build: sample_prog

.PHONY : CMakeFiles/sample_prog.dir/build

CMakeFiles/sample_prog.dir/requires: CMakeFiles/sample_prog.dir/src/main.cc.o.requires
CMakeFiles/sample_prog.dir/requires: CMakeFiles/sample_prog.dir/src/speak.cc.o.requires

.PHONY : CMakeFiles/sample_prog.dir/requires

CMakeFiles/sample_prog.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sample_prog.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sample_prog.dir/clean

CMakeFiles/sample_prog.dir/depend:
	cd /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program /home/kk/Github/CPP_Concepts/Example_Projects/Sample_Program/CMakeFiles/sample_prog.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sample_prog.dir/depend
