# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/work2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/work2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/work2.dir/flags.make

CMakeFiles/work2.dir/main.c.o: CMakeFiles/work2.dir/flags.make
CMakeFiles/work2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/work2.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/work2.dir/main.c.o -c /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/main.c

CMakeFiles/work2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/work2.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/main.c > CMakeFiles/work2.dir/main.c.i

CMakeFiles/work2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/work2.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/main.c -o CMakeFiles/work2.dir/main.c.s

# Object files for target work2
work2_OBJECTS = \
"CMakeFiles/work2.dir/main.c.o"

# External object files for target work2
work2_EXTERNAL_OBJECTS =

work2: CMakeFiles/work2.dir/main.c.o
work2: CMakeFiles/work2.dir/build.make
work2: CMakeFiles/work2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable work2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/work2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/work2.dir/build: work2

.PHONY : CMakeFiles/work2.dir/build

CMakeFiles/work2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/work2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/work2.dir/clean

CMakeFiles/work2.dir/depend:
	cd /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2 /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2 /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/cmake-build-debug /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/cmake-build-debug /Users/mikeshinoda/CLionProjects/wangdao/chapter4/work2/cmake-build-debug/CMakeFiles/work2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/work2.dir/depend

