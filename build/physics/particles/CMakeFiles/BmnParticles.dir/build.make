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
include physics/particles/CMakeFiles/BmnParticles.dir/depend.make

# Include the progress variables for this target.
include physics/particles/CMakeFiles/BmnParticles.dir/progress.make

# Include the compile flags for this target's objects.
include physics/particles/CMakeFiles/BmnParticles.dir/flags.make

physics/particles/G__BmnParticlesDict.cxx: ../physics/particles/BmnTwoParticleDecay.h
physics/particles/G__BmnParticlesDict.cxx: ../physics/particles/BmnParticlePair.h
physics/particles/G__BmnParticlesDict.cxx: ../physics/particles/LinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__BmnParticlesDict.cxx, G__BmnParticlesDict_rdict.pcm, ../../lib/libBmnParticles.rootmap"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && ./generate_dictionary_G__BmnParticlesDict.sh
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/cmake -E copy_if_different /home/alex/bmnroot_dev/bmnroot/build/physics/particles/G__BmnParticlesDict_rdict.pcm /home/alex/bmnroot_dev/bmnroot/build/lib/G__BmnParticlesDict_rdict.pcm

physics/particles/G__BmnParticlesDict_rdict.pcm: physics/particles/G__BmnParticlesDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate physics/particles/G__BmnParticlesDict_rdict.pcm

lib/libBmnParticles.rootmap: physics/particles/G__BmnParticlesDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libBmnParticles.rootmap

physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o: physics/particles/CMakeFiles/BmnParticles.dir/flags.make
physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o: ../physics/particles/BmnTwoParticleDecay.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o -c /home/alex/bmnroot_dev/bmnroot/physics/particles/BmnTwoParticleDecay.cxx

physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/physics/particles/BmnTwoParticleDecay.cxx > CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.i

physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/physics/particles/BmnTwoParticleDecay.cxx -o CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.s

physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o.requires:

.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o.requires

physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o.provides: physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o.requires
	$(MAKE) -f physics/particles/CMakeFiles/BmnParticles.dir/build.make physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o.provides.build
.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o.provides

physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o.provides.build: physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o


physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o: physics/particles/CMakeFiles/BmnParticles.dir/flags.make
physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o: ../physics/particles/BmnParticlePair.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o -c /home/alex/bmnroot_dev/bmnroot/physics/particles/BmnParticlePair.cxx

physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/physics/particles/BmnParticlePair.cxx > CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.i

physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/physics/particles/BmnParticlePair.cxx -o CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.s

physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o.requires:

.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o.requires

physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o.provides: physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o.requires
	$(MAKE) -f physics/particles/CMakeFiles/BmnParticles.dir/build.make physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o.provides.build
.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o.provides

physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o.provides.build: physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o


physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o: physics/particles/CMakeFiles/BmnParticles.dir/flags.make
physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o: physics/particles/G__BmnParticlesDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o -c /home/alex/bmnroot_dev/bmnroot/build/physics/particles/G__BmnParticlesDict.cxx

physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /home/alex/bmnroot_dev/bmnroot/build/physics/particles/G__BmnParticlesDict.cxx > CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.i

physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /home/alex/bmnroot_dev/bmnroot/build/physics/particles/G__BmnParticlesDict.cxx -o CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.s

physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o.requires:

.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o.requires

physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o.provides: physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o.requires
	$(MAKE) -f physics/particles/CMakeFiles/BmnParticles.dir/build.make physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o.provides.build
.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o.provides

physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o.provides.build: physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o


# Object files for target BmnParticles
BmnParticles_OBJECTS = \
"CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o" \
"CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o" \
"CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o"

# External object files for target BmnParticles
BmnParticles_EXTERNAL_OBJECTS =

lib/libBmnParticles.so.0.0.0: physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o
lib/libBmnParticles.so.0.0.0: physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o
lib/libBmnParticles.so.0.0.0: physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o
lib/libBmnParticles.so.0.0.0: physics/particles/CMakeFiles/BmnParticles.dir/build.make
lib/libBmnParticles.so.0.0.0: physics/particles/CMakeFiles/BmnParticles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../../lib/libBmnParticles.so"
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BmnParticles.dir/link.txt --verbose=$(VERBOSE)
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/libBmnParticles.so.0.0.0 ../../lib/libBmnParticles.so.0 ../../lib/libBmnParticles.so

lib/libBmnParticles.so.0: lib/libBmnParticles.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libBmnParticles.so.0

lib/libBmnParticles.so: lib/libBmnParticles.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libBmnParticles.so

# Rule to build all files generated by this target.
physics/particles/CMakeFiles/BmnParticles.dir/build: lib/libBmnParticles.so

.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/build

physics/particles/CMakeFiles/BmnParticles.dir/requires: physics/particles/CMakeFiles/BmnParticles.dir/BmnTwoParticleDecay.cxx.o.requires
physics/particles/CMakeFiles/BmnParticles.dir/requires: physics/particles/CMakeFiles/BmnParticles.dir/BmnParticlePair.cxx.o.requires
physics/particles/CMakeFiles/BmnParticles.dir/requires: physics/particles/CMakeFiles/BmnParticles.dir/G__BmnParticlesDict.cxx.o.requires

.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/requires

physics/particles/CMakeFiles/BmnParticles.dir/clean:
	cd /home/alex/bmnroot_dev/bmnroot/build/physics/particles && $(CMAKE_COMMAND) -P CMakeFiles/BmnParticles.dir/cmake_clean.cmake
.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/clean

physics/particles/CMakeFiles/BmnParticles.dir/depend: physics/particles/G__BmnParticlesDict.cxx
physics/particles/CMakeFiles/BmnParticles.dir/depend: physics/particles/G__BmnParticlesDict_rdict.pcm
physics/particles/CMakeFiles/BmnParticles.dir/depend: lib/libBmnParticles.rootmap
	cd /home/alex/bmnroot_dev/bmnroot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/bmnroot_dev/bmnroot /home/alex/bmnroot_dev/bmnroot/physics/particles /home/alex/bmnroot_dev/bmnroot/build /home/alex/bmnroot_dev/bmnroot/build/physics/particles /home/alex/bmnroot_dev/bmnroot/build/physics/particles/CMakeFiles/BmnParticles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : physics/particles/CMakeFiles/BmnParticles.dir/depend

