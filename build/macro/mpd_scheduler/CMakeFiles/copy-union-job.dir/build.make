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

# Utility rule file for copy-union-job.

# Include the progress variables for this target.
include macro/mpd_scheduler/CMakeFiles/copy-union-job.dir/progress.make

macro/mpd_scheduler/CMakeFiles/copy-union-job: bin/union.sh


bin/union.sh: ../macro/mpd_scheduler/src/union/union.sh
bin/union.sh: ../macro/mpd_scheduler/src/union/union.sh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../bin/union.sh"
	cd /home/alex/bmnroot_dev/bmnroot/build/macro/mpd_scheduler && /usr/bin/cmake -E copy_if_different /home/alex/bmnroot_dev/bmnroot/macro/mpd_scheduler/src/union/union.sh /home/alex/bmnroot_dev/bmnroot/build/bin/union.sh

copy-union-job: macro/mpd_scheduler/CMakeFiles/copy-union-job
copy-union-job: bin/union.sh
copy-union-job: macro/mpd_scheduler/CMakeFiles/copy-union-job.dir/build.make

.PHONY : copy-union-job

# Rule to build all files generated by this target.
macro/mpd_scheduler/CMakeFiles/copy-union-job.dir/build: copy-union-job

.PHONY : macro/mpd_scheduler/CMakeFiles/copy-union-job.dir/build

macro/mpd_scheduler/CMakeFiles/copy-union-job.dir/clean:
	cd /home/alex/bmnroot_dev/bmnroot/build/macro/mpd_scheduler && $(CMAKE_COMMAND) -P CMakeFiles/copy-union-job.dir/cmake_clean.cmake
.PHONY : macro/mpd_scheduler/CMakeFiles/copy-union-job.dir/clean

macro/mpd_scheduler/CMakeFiles/copy-union-job.dir/depend:
	cd /home/alex/bmnroot_dev/bmnroot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/bmnroot_dev/bmnroot /home/alex/bmnroot_dev/bmnroot/macro/mpd_scheduler /home/alex/bmnroot_dev/bmnroot/build /home/alex/bmnroot_dev/bmnroot/build/macro/mpd_scheduler /home/alex/bmnroot_dev/bmnroot/build/macro/mpd_scheduler/CMakeFiles/copy-union-job.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : macro/mpd_scheduler/CMakeFiles/copy-union-job.dir/depend

