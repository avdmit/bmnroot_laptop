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

# Include any dependencies generated for this target.
include land/CMakeFiles/LAND.dir/depend.make

# Include the progress variables for this target.
include land/CMakeFiles/LAND.dir/progress.make

# Include the compile flags for this target's objects.
include land/CMakeFiles/LAND.dir/flags.make

land/G__LANDDict.cxx: ../land/BmnLANDHit.h
land/G__LANDDict.cxx: ../land/BmnLANDHitProducer.h
land/G__LANDDict.cxx: ../land/BmnLANDLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__LANDDict.cxx, G__LANDDict_rdict.pcm, ../lib/libLAND.rootmap"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && ./generate_dictionary_G__LANDDict.sh
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/cmake -E copy_if_different /home/alex/bmnroot_dev/bmnroot/build/land/G__LANDDict_rdict.pcm /home/alex/bmnroot_dev/bmnroot/build/lib/G__LANDDict_rdict.pcm

land/G__LANDDict_rdict.pcm: land/G__LANDDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate land/G__LANDDict_rdict.pcm

lib/libLAND.rootmap: land/G__LANDDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libLAND.rootmap

land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o: land/CMakeFiles/LAND.dir/flags.make
land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o: ../land/BmnLANDHit.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAND.dir/BmnLANDHit.cxx.o -c /home/alex/bmnroot_dev/bmnroot/land/BmnLANDHit.cxx

land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAND.dir/BmnLANDHit.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/land/BmnLANDHit.cxx > CMakeFiles/LAND.dir/BmnLANDHit.cxx.i

land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAND.dir/BmnLANDHit.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/land/BmnLANDHit.cxx -o CMakeFiles/LAND.dir/BmnLANDHit.cxx.s

land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o.requires:

.PHONY : land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o.requires

land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o.provides: land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o.requires
	$(MAKE) -f land/CMakeFiles/LAND.dir/build.make land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o.provides.build
.PHONY : land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o.provides

land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o.provides.build: land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o


land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o: land/CMakeFiles/LAND.dir/flags.make
land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o: ../land/BmnLANDHitProducer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o -c /home/alex/bmnroot_dev/bmnroot/land/BmnLANDHitProducer.cxx

land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/land/BmnLANDHitProducer.cxx > CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.i

land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/land/BmnLANDHitProducer.cxx -o CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.s

land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o.requires:

.PHONY : land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o.requires

land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o.provides: land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o.requires
	$(MAKE) -f land/CMakeFiles/LAND.dir/build.make land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o.provides.build
.PHONY : land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o.provides

land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o.provides.build: land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o


land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o: land/CMakeFiles/LAND.dir/flags.make
land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o: land/G__LANDDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/LAND.dir/G__LANDDict.cxx.o -c /home/alex/bmnroot_dev/bmnroot/build/land/G__LANDDict.cxx

land/CMakeFiles/LAND.dir/G__LANDDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAND.dir/G__LANDDict.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /home/alex/bmnroot_dev/bmnroot/build/land/G__LANDDict.cxx > CMakeFiles/LAND.dir/G__LANDDict.cxx.i

land/CMakeFiles/LAND.dir/G__LANDDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAND.dir/G__LANDDict.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /home/alex/bmnroot_dev/bmnroot/build/land/G__LANDDict.cxx -o CMakeFiles/LAND.dir/G__LANDDict.cxx.s

land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o.requires:

.PHONY : land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o.requires

land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o.provides: land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o.requires
	$(MAKE) -f land/CMakeFiles/LAND.dir/build.make land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o.provides.build
.PHONY : land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o.provides

land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o.provides.build: land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o


# Object files for target LAND
LAND_OBJECTS = \
"CMakeFiles/LAND.dir/BmnLANDHit.cxx.o" \
"CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o" \
"CMakeFiles/LAND.dir/G__LANDDict.cxx.o"

# External object files for target LAND
LAND_EXTERNAL_OBJECTS =

lib/libLAND.so.0.0.0: land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o
lib/libLAND.so.0.0.0: land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o
lib/libLAND.so.0.0.0: land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o
lib/libLAND.so.0.0.0: land/CMakeFiles/LAND.dir/build.make
lib/libLAND.so.0.0.0: lib/libBmnData.so.0.0.0
lib/libLAND.so.0.0.0: land/CMakeFiles/LAND.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../lib/libLAND.so"
	cd /home/alex/bmnroot_dev/bmnroot/build/land && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LAND.dir/link.txt --verbose=$(VERBOSE)
	cd /home/alex/bmnroot_dev/bmnroot/build/land && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libLAND.so.0.0.0 ../lib/libLAND.so.0 ../lib/libLAND.so

lib/libLAND.so.0: lib/libLAND.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libLAND.so.0

lib/libLAND.so: lib/libLAND.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libLAND.so

# Rule to build all files generated by this target.
land/CMakeFiles/LAND.dir/build: lib/libLAND.so

.PHONY : land/CMakeFiles/LAND.dir/build

land/CMakeFiles/LAND.dir/requires: land/CMakeFiles/LAND.dir/BmnLANDHit.cxx.o.requires
land/CMakeFiles/LAND.dir/requires: land/CMakeFiles/LAND.dir/BmnLANDHitProducer.cxx.o.requires
land/CMakeFiles/LAND.dir/requires: land/CMakeFiles/LAND.dir/G__LANDDict.cxx.o.requires

.PHONY : land/CMakeFiles/LAND.dir/requires

land/CMakeFiles/LAND.dir/clean:
	cd /home/alex/bmnroot_dev/bmnroot/build/land && $(CMAKE_COMMAND) -P CMakeFiles/LAND.dir/cmake_clean.cmake
.PHONY : land/CMakeFiles/LAND.dir/clean

land/CMakeFiles/LAND.dir/depend: land/G__LANDDict.cxx
land/CMakeFiles/LAND.dir/depend: land/G__LANDDict_rdict.pcm
land/CMakeFiles/LAND.dir/depend: lib/libLAND.rootmap
	cd /home/alex/bmnroot_dev/bmnroot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/bmnroot_dev/bmnroot /home/alex/bmnroot_dev/bmnroot/land /home/alex/bmnroot_dev/bmnroot/build /home/alex/bmnroot_dev/bmnroot/build/land /home/alex/bmnroot_dev/bmnroot/build/land/CMakeFiles/LAND.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : land/CMakeFiles/LAND.dir/depend
