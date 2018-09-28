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
include passive/CMakeFiles/Passive.dir/depend.make

# Include the progress variables for this target.
include passive/CMakeFiles/Passive.dir/progress.make

# Include the compile flags for this target's objects.
include passive/CMakeFiles/Passive.dir/flags.make

passive/G__PassiveDict.cxx: ../passive/FairCave.h
passive/G__PassiveDict.cxx: ../passive/FairGeoCave.h
passive/G__PassiveDict.cxx: ../passive/FairGeoMagnet.h
passive/G__PassiveDict.cxx: ../passive/FairGeoPassivePar.h
passive/G__PassiveDict.cxx: ../passive/FairGeoPipe.h
passive/G__PassiveDict.cxx: ../passive/FairGeoTarget.h
passive/G__PassiveDict.cxx: ../passive/FairMagnet.h
passive/G__PassiveDict.cxx: ../passive/FairPassiveContFact.h
passive/G__PassiveDict.cxx: ../passive/FairPipe.h
passive/G__PassiveDict.cxx: ../passive/FairTarget.h
passive/G__PassiveDict.cxx: ../passive/PassiveLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__PassiveDict.cxx, G__PassiveDict_rdict.pcm, ../lib/libPassive.rootmap"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && ./generate_dictionary_G__PassiveDict.sh
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/cmake -E copy_if_different /home/alex/bmnroot_dev/bmnroot/build/passive/G__PassiveDict_rdict.pcm /home/alex/bmnroot_dev/bmnroot/build/lib/G__PassiveDict_rdict.pcm

passive/G__PassiveDict_rdict.pcm: passive/G__PassiveDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate passive/G__PassiveDict_rdict.pcm

lib/libPassive.rootmap: passive/G__PassiveDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libPassive.rootmap

passive/CMakeFiles/Passive.dir/FairCave.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairCave.cxx.o: ../passive/FairCave.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object passive/CMakeFiles/Passive.dir/FairCave.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairCave.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairCave.cxx

passive/CMakeFiles/Passive.dir/FairCave.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairCave.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairCave.cxx > CMakeFiles/Passive.dir/FairCave.cxx.i

passive/CMakeFiles/Passive.dir/FairCave.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairCave.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairCave.cxx -o CMakeFiles/Passive.dir/FairCave.cxx.s

passive/CMakeFiles/Passive.dir/FairCave.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairCave.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairCave.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairCave.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairCave.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairCave.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairCave.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairCave.cxx.o


passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o: ../passive/FairGeoCave.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairGeoCave.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairGeoCave.cxx

passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairGeoCave.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairGeoCave.cxx > CMakeFiles/Passive.dir/FairGeoCave.cxx.i

passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairGeoCave.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairGeoCave.cxx -o CMakeFiles/Passive.dir/FairGeoCave.cxx.s

passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o


passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o: ../passive/FairGeoMagnet.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairGeoMagnet.cxx

passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairGeoMagnet.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairGeoMagnet.cxx > CMakeFiles/Passive.dir/FairGeoMagnet.cxx.i

passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairGeoMagnet.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairGeoMagnet.cxx -o CMakeFiles/Passive.dir/FairGeoMagnet.cxx.s

passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o


passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o: ../passive/FairGeoPassivePar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairGeoPassivePar.cxx

passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairGeoPassivePar.cxx > CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.i

passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairGeoPassivePar.cxx -o CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.s

passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o


passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o: ../passive/FairGeoPipe.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairGeoPipe.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairGeoPipe.cxx

passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairGeoPipe.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairGeoPipe.cxx > CMakeFiles/Passive.dir/FairGeoPipe.cxx.i

passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairGeoPipe.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairGeoPipe.cxx -o CMakeFiles/Passive.dir/FairGeoPipe.cxx.s

passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o


passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o: ../passive/FairGeoTarget.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairGeoTarget.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairGeoTarget.cxx

passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairGeoTarget.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairGeoTarget.cxx > CMakeFiles/Passive.dir/FairGeoTarget.cxx.i

passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairGeoTarget.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairGeoTarget.cxx -o CMakeFiles/Passive.dir/FairGeoTarget.cxx.s

passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o


passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o: ../passive/FairMagnet.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairMagnet.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairMagnet.cxx

passive/CMakeFiles/Passive.dir/FairMagnet.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairMagnet.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairMagnet.cxx > CMakeFiles/Passive.dir/FairMagnet.cxx.i

passive/CMakeFiles/Passive.dir/FairMagnet.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairMagnet.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairMagnet.cxx -o CMakeFiles/Passive.dir/FairMagnet.cxx.s

passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o


passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o: ../passive/FairPassiveContFact.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairPassiveContFact.cxx

passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairPassiveContFact.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairPassiveContFact.cxx > CMakeFiles/Passive.dir/FairPassiveContFact.cxx.i

passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairPassiveContFact.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairPassiveContFact.cxx -o CMakeFiles/Passive.dir/FairPassiveContFact.cxx.s

passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o


passive/CMakeFiles/Passive.dir/FairPipe.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairPipe.cxx.o: ../passive/FairPipe.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object passive/CMakeFiles/Passive.dir/FairPipe.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairPipe.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairPipe.cxx

passive/CMakeFiles/Passive.dir/FairPipe.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairPipe.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairPipe.cxx > CMakeFiles/Passive.dir/FairPipe.cxx.i

passive/CMakeFiles/Passive.dir/FairPipe.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairPipe.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairPipe.cxx -o CMakeFiles/Passive.dir/FairPipe.cxx.s

passive/CMakeFiles/Passive.dir/FairPipe.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairPipe.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairPipe.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairPipe.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairPipe.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairPipe.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairPipe.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairPipe.cxx.o


passive/CMakeFiles/Passive.dir/FairTarget.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/FairTarget.cxx.o: ../passive/FairTarget.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object passive/CMakeFiles/Passive.dir/FairTarget.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Passive.dir/FairTarget.cxx.o -c /home/alex/bmnroot_dev/bmnroot/passive/FairTarget.cxx

passive/CMakeFiles/Passive.dir/FairTarget.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/FairTarget.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/passive/FairTarget.cxx > CMakeFiles/Passive.dir/FairTarget.cxx.i

passive/CMakeFiles/Passive.dir/FairTarget.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/FairTarget.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/passive/FairTarget.cxx -o CMakeFiles/Passive.dir/FairTarget.cxx.s

passive/CMakeFiles/Passive.dir/FairTarget.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/FairTarget.cxx.o.requires

passive/CMakeFiles/Passive.dir/FairTarget.cxx.o.provides: passive/CMakeFiles/Passive.dir/FairTarget.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/FairTarget.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/FairTarget.cxx.o.provides

passive/CMakeFiles/Passive.dir/FairTarget.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/FairTarget.cxx.o


passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o: passive/CMakeFiles/Passive.dir/flags.make
passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o: passive/G__PassiveDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/Passive.dir/G__PassiveDict.cxx.o -c /home/alex/bmnroot_dev/bmnroot/build/passive/G__PassiveDict.cxx

passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Passive.dir/G__PassiveDict.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /home/alex/bmnroot_dev/bmnroot/build/passive/G__PassiveDict.cxx > CMakeFiles/Passive.dir/G__PassiveDict.cxx.i

passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Passive.dir/G__PassiveDict.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /home/alex/bmnroot_dev/bmnroot/build/passive/G__PassiveDict.cxx -o CMakeFiles/Passive.dir/G__PassiveDict.cxx.s

passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o.requires:

.PHONY : passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o.requires

passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o.provides: passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o.requires
	$(MAKE) -f passive/CMakeFiles/Passive.dir/build.make passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o.provides.build
.PHONY : passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o.provides

passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o.provides.build: passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o


# Object files for target Passive
Passive_OBJECTS = \
"CMakeFiles/Passive.dir/FairCave.cxx.o" \
"CMakeFiles/Passive.dir/FairGeoCave.cxx.o" \
"CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o" \
"CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o" \
"CMakeFiles/Passive.dir/FairGeoPipe.cxx.o" \
"CMakeFiles/Passive.dir/FairGeoTarget.cxx.o" \
"CMakeFiles/Passive.dir/FairMagnet.cxx.o" \
"CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o" \
"CMakeFiles/Passive.dir/FairPipe.cxx.o" \
"CMakeFiles/Passive.dir/FairTarget.cxx.o" \
"CMakeFiles/Passive.dir/G__PassiveDict.cxx.o"

# External object files for target Passive
Passive_EXTERNAL_OBJECTS =

lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairCave.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairPipe.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/FairTarget.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/build.make
lib/libPassive.so.0.0.0: passive/CMakeFiles/Passive.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX shared library ../lib/libPassive.so"
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Passive.dir/link.txt --verbose=$(VERBOSE)
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libPassive.so.0.0.0 ../lib/libPassive.so.0 ../lib/libPassive.so

lib/libPassive.so.0: lib/libPassive.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libPassive.so.0

lib/libPassive.so: lib/libPassive.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libPassive.so

# Rule to build all files generated by this target.
passive/CMakeFiles/Passive.dir/build: lib/libPassive.so

.PHONY : passive/CMakeFiles/Passive.dir/build

passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairCave.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairGeoCave.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairGeoMagnet.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairGeoPassivePar.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairGeoPipe.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairGeoTarget.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairMagnet.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairPassiveContFact.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairPipe.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/FairTarget.cxx.o.requires
passive/CMakeFiles/Passive.dir/requires: passive/CMakeFiles/Passive.dir/G__PassiveDict.cxx.o.requires

.PHONY : passive/CMakeFiles/Passive.dir/requires

passive/CMakeFiles/Passive.dir/clean:
	cd /home/alex/bmnroot_dev/bmnroot/build/passive && $(CMAKE_COMMAND) -P CMakeFiles/Passive.dir/cmake_clean.cmake
.PHONY : passive/CMakeFiles/Passive.dir/clean

passive/CMakeFiles/Passive.dir/depend: passive/G__PassiveDict.cxx
passive/CMakeFiles/Passive.dir/depend: passive/G__PassiveDict_rdict.pcm
passive/CMakeFiles/Passive.dir/depend: lib/libPassive.rootmap
	cd /home/alex/bmnroot_dev/bmnroot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/bmnroot_dev/bmnroot /home/alex/bmnroot_dev/bmnroot/passive /home/alex/bmnroot_dev/bmnroot/build /home/alex/bmnroot_dev/bmnroot/build/passive /home/alex/bmnroot_dev/bmnroot/build/passive/CMakeFiles/Passive.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : passive/CMakeFiles/Passive.dir/depend

