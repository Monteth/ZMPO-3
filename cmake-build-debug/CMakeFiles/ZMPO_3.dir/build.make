# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/monteth/Programs/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/monteth/Programs/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/monteth/Documents/CLionProjects/ZMPO-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ZMPO_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ZMPO_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ZMPO_3.dir/flags.make

CMakeFiles/ZMPO_3.dir/main.cpp.o: CMakeFiles/ZMPO_3.dir/flags.make
CMakeFiles/ZMPO_3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ZMPO_3.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ZMPO_3.dir/main.cpp.o -c /home/monteth/Documents/CLionProjects/ZMPO-3/main.cpp

CMakeFiles/ZMPO_3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZMPO_3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/monteth/Documents/CLionProjects/ZMPO-3/main.cpp > CMakeFiles/ZMPO_3.dir/main.cpp.i

CMakeFiles/ZMPO_3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZMPO_3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/monteth/Documents/CLionProjects/ZMPO-3/main.cpp -o CMakeFiles/ZMPO_3.dir/main.cpp.s

CMakeFiles/ZMPO_3.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ZMPO_3.dir/main.cpp.o.requires

CMakeFiles/ZMPO_3.dir/main.cpp.o.provides: CMakeFiles/ZMPO_3.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ZMPO_3.dir/build.make CMakeFiles/ZMPO_3.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ZMPO_3.dir/main.cpp.o.provides

CMakeFiles/ZMPO_3.dir/main.cpp.o.provides.build: CMakeFiles/ZMPO_3.dir/main.cpp.o


CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o: CMakeFiles/ZMPO_3.dir/flags.make
CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o: ../Tree/Tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o -c /home/monteth/Documents/CLionProjects/ZMPO-3/Tree/Tree.cpp

CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/monteth/Documents/CLionProjects/ZMPO-3/Tree/Tree.cpp > CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.i

CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/monteth/Documents/CLionProjects/ZMPO-3/Tree/Tree.cpp -o CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.s

CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o.requires:

.PHONY : CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o.requires

CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o.provides: CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o.requires
	$(MAKE) -f CMakeFiles/ZMPO_3.dir/build.make CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o.provides.build
.PHONY : CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o.provides

CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o.provides.build: CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o


CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o: CMakeFiles/ZMPO_3.dir/flags.make
CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o: ../Tree/Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o -c /home/monteth/Documents/CLionProjects/ZMPO-3/Tree/Node.cpp

CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/monteth/Documents/CLionProjects/ZMPO-3/Tree/Node.cpp > CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.i

CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/monteth/Documents/CLionProjects/ZMPO-3/Tree/Node.cpp -o CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.s

CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o.requires:

.PHONY : CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o.requires

CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o.provides: CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o.requires
	$(MAKE) -f CMakeFiles/ZMPO_3.dir/build.make CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o.provides.build
.PHONY : CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o.provides

CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o.provides.build: CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o


CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o: CMakeFiles/ZMPO_3.dir/flags.make
CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o: ../Tree/Tools.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o -c /home/monteth/Documents/CLionProjects/ZMPO-3/Tree/Tools.cpp

CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/monteth/Documents/CLionProjects/ZMPO-3/Tree/Tools.cpp > CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.i

CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/monteth/Documents/CLionProjects/ZMPO-3/Tree/Tools.cpp -o CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.s

CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o.requires:

.PHONY : CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o.requires

CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o.provides: CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o.requires
	$(MAKE) -f CMakeFiles/ZMPO_3.dir/build.make CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o.provides.build
.PHONY : CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o.provides

CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o.provides.build: CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o


CMakeFiles/ZMPO_3.dir/Interface.cpp.o: CMakeFiles/ZMPO_3.dir/flags.make
CMakeFiles/ZMPO_3.dir/Interface.cpp.o: ../Interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ZMPO_3.dir/Interface.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ZMPO_3.dir/Interface.cpp.o -c /home/monteth/Documents/CLionProjects/ZMPO-3/Interface.cpp

CMakeFiles/ZMPO_3.dir/Interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZMPO_3.dir/Interface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/monteth/Documents/CLionProjects/ZMPO-3/Interface.cpp > CMakeFiles/ZMPO_3.dir/Interface.cpp.i

CMakeFiles/ZMPO_3.dir/Interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZMPO_3.dir/Interface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/monteth/Documents/CLionProjects/ZMPO-3/Interface.cpp -o CMakeFiles/ZMPO_3.dir/Interface.cpp.s

CMakeFiles/ZMPO_3.dir/Interface.cpp.o.requires:

.PHONY : CMakeFiles/ZMPO_3.dir/Interface.cpp.o.requires

CMakeFiles/ZMPO_3.dir/Interface.cpp.o.provides: CMakeFiles/ZMPO_3.dir/Interface.cpp.o.requires
	$(MAKE) -f CMakeFiles/ZMPO_3.dir/build.make CMakeFiles/ZMPO_3.dir/Interface.cpp.o.provides.build
.PHONY : CMakeFiles/ZMPO_3.dir/Interface.cpp.o.provides

CMakeFiles/ZMPO_3.dir/Interface.cpp.o.provides.build: CMakeFiles/ZMPO_3.dir/Interface.cpp.o


# Object files for target ZMPO_3
ZMPO_3_OBJECTS = \
"CMakeFiles/ZMPO_3.dir/main.cpp.o" \
"CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o" \
"CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o" \
"CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o" \
"CMakeFiles/ZMPO_3.dir/Interface.cpp.o"

# External object files for target ZMPO_3
ZMPO_3_EXTERNAL_OBJECTS =

ZMPO_3: CMakeFiles/ZMPO_3.dir/main.cpp.o
ZMPO_3: CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o
ZMPO_3: CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o
ZMPO_3: CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o
ZMPO_3: CMakeFiles/ZMPO_3.dir/Interface.cpp.o
ZMPO_3: CMakeFiles/ZMPO_3.dir/build.make
ZMPO_3: CMakeFiles/ZMPO_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ZMPO_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ZMPO_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ZMPO_3.dir/build: ZMPO_3

.PHONY : CMakeFiles/ZMPO_3.dir/build

CMakeFiles/ZMPO_3.dir/requires: CMakeFiles/ZMPO_3.dir/main.cpp.o.requires
CMakeFiles/ZMPO_3.dir/requires: CMakeFiles/ZMPO_3.dir/Tree/Tree.cpp.o.requires
CMakeFiles/ZMPO_3.dir/requires: CMakeFiles/ZMPO_3.dir/Tree/Node.cpp.o.requires
CMakeFiles/ZMPO_3.dir/requires: CMakeFiles/ZMPO_3.dir/Tree/Tools.cpp.o.requires
CMakeFiles/ZMPO_3.dir/requires: CMakeFiles/ZMPO_3.dir/Interface.cpp.o.requires

.PHONY : CMakeFiles/ZMPO_3.dir/requires

CMakeFiles/ZMPO_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ZMPO_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ZMPO_3.dir/clean

CMakeFiles/ZMPO_3.dir/depend:
	cd /home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/monteth/Documents/CLionProjects/ZMPO-3 /home/monteth/Documents/CLionProjects/ZMPO-3 /home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug /home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug /home/monteth/Documents/CLionProjects/ZMPO-3/cmake-build-debug/CMakeFiles/ZMPO_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ZMPO_3.dir/depend

