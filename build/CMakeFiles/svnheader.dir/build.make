# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/alex/bmnroot_dev/bmnroot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/bmnroot_dev/bmnroot/build

# Utility rule file for svnheader.

# Include the progress variables for this target.
include CMakeFiles/svnheader.dir/progress.make

svnheader: CMakeFiles/svnheader.dir/build.make
	/usr/bin/cmake -DSOURCE_DIR=/home/alex/bmnroot_dev/bmnroot -DBINARY_DIR=/home/alex/bmnroot_dev/bmnroot/build -DINCLUDE_OUTPUT_DIRECTORY=/home/alex/bmnroot_dev/bmnroot/build/include -DFAIRROOT=/opt/fairroot/install/share/fairbase/cmake -P /opt/fairroot/install/share/fairbase/cmake/modules/GenerateVersionInfo.cmake
.PHONY : svnheader

# Rule to build all files generated by this target.
CMakeFiles/svnheader.dir/build: svnheader

.PHONY : CMakeFiles/svnheader.dir/build

CMakeFiles/svnheader.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/svnheader.dir/cmake_clean.cmake
.PHONY : CMakeFiles/svnheader.dir/clean

CMakeFiles/svnheader.dir/depend:
	cd /home/alex/bmnroot_dev/bmnroot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/bmnroot_dev/bmnroot /home/alex/bmnroot_dev/bmnroot /home/alex/bmnroot_dev/bmnroot/build /home/alex/bmnroot_dev/bmnroot/build /home/alex/bmnroot_dev/bmnroot/build/CMakeFiles/svnheader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/svnheader.dir/depend
