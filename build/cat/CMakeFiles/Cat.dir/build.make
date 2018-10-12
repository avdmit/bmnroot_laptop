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
include cat/CMakeFiles/Cat.dir/depend.make

# Include the progress variables for this target.
include cat/CMakeFiles/Cat.dir/progress.make

# Include the compile flags for this target's objects.
include cat/CMakeFiles/Cat.dir/flags.make

cat/G__CatDict.cxx: ../cat/CbmL1.h
cat/G__CatDict.cxx: ../cat/CbmL1MCTrack.h
cat/G__CatDict.cxx: ../cat/CbmL1MCPoint.h
cat/G__CatDict.cxx: ../cat/CbmL1StsHit.h
cat/G__CatDict.cxx: ../cat/CbmL1Track.h
cat/G__CatDict.cxx: ../cat/CbmL1TrackPar.h
cat/G__CatDict.cxx: ../cat/CbmL1Vtx.h
cat/G__CatDict.cxx: ../cat/OffLineInterface/CbmL1StsTrackFinder.h
cat/G__CatDict.cxx: ../cat/CbmL1PartEfficiencies.h
cat/G__CatDict.cxx: ../cat/CatLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__CatDict.cxx, G__CatDict_rdict.pcm, ../lib/libCat.rootmap"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && ./generate_dictionary_G__CatDict.sh
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/cmake -E copy_if_different /home/alex/bmnroot_dev/bmnroot/build/cat/G__CatDict_rdict.pcm /home/alex/bmnroot_dev/bmnroot/build/lib/G__CatDict_rdict.pcm

cat/G__CatDict_rdict.pcm: cat/G__CatDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate cat/G__CatDict_rdict.pcm

lib/libCat.rootmap: cat/G__CatDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libCat.rootmap

cat/CMakeFiles/Cat.dir/CbmL1.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/CbmL1.cxx.o: ../cat/CbmL1.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object cat/CMakeFiles/Cat.dir/CbmL1.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/CbmL1.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/CbmL1.cxx

cat/CMakeFiles/Cat.dir/CbmL1.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/CbmL1.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/CbmL1.cxx > CMakeFiles/Cat.dir/CbmL1.cxx.i

cat/CMakeFiles/Cat.dir/CbmL1.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/CbmL1.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/CbmL1.cxx -o CMakeFiles/Cat.dir/CbmL1.cxx.s

cat/CMakeFiles/Cat.dir/CbmL1.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/CbmL1.cxx.o.requires

cat/CMakeFiles/Cat.dir/CbmL1.cxx.o.provides: cat/CMakeFiles/Cat.dir/CbmL1.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/CbmL1.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/CbmL1.cxx.o.provides

cat/CMakeFiles/Cat.dir/CbmL1.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/CbmL1.cxx.o


cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o: ../cat/CbmL1Performance.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/CbmL1Performance.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/CbmL1Performance.cxx

cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/CbmL1Performance.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/CbmL1Performance.cxx > CMakeFiles/Cat.dir/CbmL1Performance.cxx.i

cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/CbmL1Performance.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/CbmL1Performance.cxx -o CMakeFiles/Cat.dir/CbmL1Performance.cxx.s

cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o.requires

cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o.provides: cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o.provides

cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o


cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o: ../cat/CbmL1ReadEvent.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/CbmL1ReadEvent.cxx

cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/CbmL1ReadEvent.cxx > CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.i

cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/CbmL1ReadEvent.cxx -o CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.s

cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o.requires

cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o.provides: cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o.provides

cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o


cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o: ../cat/CbmL1MCTrack.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/CbmL1MCTrack.cxx

cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/CbmL1MCTrack.cxx > CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.i

cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/CbmL1MCTrack.cxx -o CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.s

cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o.requires

cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o.provides: cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o.provides

cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o


cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o: ../cat/CbmL1ParticlesFinder.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/CbmL1ParticlesFinder.cxx

cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/CbmL1ParticlesFinder.cxx > CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.i

cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/CbmL1ParticlesFinder.cxx -o CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.s

cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o.requires

cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o.provides: cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o.provides

cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o


cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o: ../cat/L1Algo/L1Algo.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1Algo.cxx

cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1Algo.cxx > CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.i

cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1Algo.cxx -o CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.s

cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o.requires

cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o.provides: cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o.provides

cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o


cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o: ../cat/L1Algo/L1CATrackFinder.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1CATrackFinder.cxx

cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1CATrackFinder.cxx > CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.i

cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1CATrackFinder.cxx -o CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.s

cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o.requires

cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o.provides: cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o.provides

cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o


cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o: ../cat/L1Algo/L1TrackExtender.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1TrackExtender.cxx

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1TrackExtender.cxx > CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.i

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1TrackExtender.cxx -o CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.s

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o.requires

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o.provides: cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o.provides

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o


cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o: ../cat/L1Algo/L1TrackFitter.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1TrackFitter.cxx

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1TrackFitter.cxx > CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.i

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1TrackFitter.cxx -o CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.s

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o.requires

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o.provides: cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o.provides

cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o


cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o: ../cat/L1Algo/L1CAMergeClones.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1CAMergeClones.cxx

cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1CAMergeClones.cxx > CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.i

cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1CAMergeClones.cxx -o CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.s

cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o.requires

cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o.provides: cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o.provides

cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o


cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o: ../cat/L1Algo/L1HitsSortHelper.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1HitsSortHelper.cxx

cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1HitsSortHelper.cxx > CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.i

cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/L1Algo/L1HitsSortHelper.cxx -o CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.s

cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o.requires

cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o.provides: cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o.provides

cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o


cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o: ../cat/OffLineInterface/CbmL1StsTrackFinder.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/OffLineInterface/CbmL1StsTrackFinder.cxx

cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/OffLineInterface/CbmL1StsTrackFinder.cxx > CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.i

cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/OffLineInterface/CbmL1StsTrackFinder.cxx -o CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.s

cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o.requires

cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o.provides: cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o.provides

cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o


cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o: ../cat/ParticleFinder/CbmL1PFFitter.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/ParticleFinder/CbmL1PFFitter.cxx

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/ParticleFinder/CbmL1PFFitter.cxx > CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.i

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/ParticleFinder/CbmL1PFFitter.cxx -o CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.s

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o.requires

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o.provides: cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o.provides

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o


cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o: ../cat/ParticleFinder/CbmL1PFMCParticle.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -o CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o -c /home/alex/bmnroot_dev/bmnroot/cat/ParticleFinder/CbmL1PFMCParticle.cxx

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -E /home/alex/bmnroot_dev/bmnroot/cat/ParticleFinder/CbmL1PFMCParticle.cxx > CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.i

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -msse -O3 -S /home/alex/bmnroot_dev/bmnroot/cat/ParticleFinder/CbmL1PFMCParticle.cxx -o CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.s

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o.requires

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o.provides: cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o.provides

cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o


cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o: cat/CMakeFiles/Cat.dir/flags.make
cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o: cat/G__CatDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/Cat.dir/G__CatDict.cxx.o -c /home/alex/bmnroot_dev/bmnroot/build/cat/G__CatDict.cxx

cat/CMakeFiles/Cat.dir/G__CatDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cat.dir/G__CatDict.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /home/alex/bmnroot_dev/bmnroot/build/cat/G__CatDict.cxx > CMakeFiles/Cat.dir/G__CatDict.cxx.i

cat/CMakeFiles/Cat.dir/G__CatDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cat.dir/G__CatDict.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /home/alex/bmnroot_dev/bmnroot/build/cat/G__CatDict.cxx -o CMakeFiles/Cat.dir/G__CatDict.cxx.s

cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o.requires:

.PHONY : cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o.requires

cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o.provides: cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o.requires
	$(MAKE) -f cat/CMakeFiles/Cat.dir/build.make cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o.provides.build
.PHONY : cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o.provides

cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o.provides.build: cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o


# Object files for target Cat
Cat_OBJECTS = \
"CMakeFiles/Cat.dir/CbmL1.cxx.o" \
"CMakeFiles/Cat.dir/CbmL1Performance.cxx.o" \
"CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o" \
"CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o" \
"CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o" \
"CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o" \
"CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o" \
"CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o" \
"CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o" \
"CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o" \
"CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o" \
"CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o" \
"CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o" \
"CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o" \
"CMakeFiles/Cat.dir/G__CatDict.cxx.o"

# External object files for target Cat
Cat_EXTERNAL_OBJECTS =

lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/CbmL1.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/build.make
lib/libCat.so.0.0.0: lib/libKF.so.0.0.0
lib/libCat.so.0.0.0: lib/libSts.so.0.0.0
lib/libCat.so.0.0.0: lib/libBmnData.so.0.0.0
lib/libCat.so.0.0.0: cat/CMakeFiles/Cat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX shared library ../lib/libCat.so"
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cat.dir/link.txt --verbose=$(VERBOSE)
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libCat.so.0.0.0 ../lib/libCat.so.0 ../lib/libCat.so

lib/libCat.so.0: lib/libCat.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libCat.so.0

lib/libCat.so: lib/libCat.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libCat.so

# Rule to build all files generated by this target.
cat/CMakeFiles/Cat.dir/build: lib/libCat.so

.PHONY : cat/CMakeFiles/Cat.dir/build

cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/CbmL1.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/CbmL1Performance.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/CbmL1ReadEvent.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/CbmL1MCTrack.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/CbmL1ParticlesFinder.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/L1Algo/L1Algo.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/L1Algo/L1CATrackFinder.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/L1Algo/L1TrackExtender.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/L1Algo/L1TrackFitter.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/L1Algo/L1CAMergeClones.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/L1Algo/L1HitsSortHelper.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/OffLineInterface/CbmL1StsTrackFinder.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFFitter.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/ParticleFinder/CbmL1PFMCParticle.cxx.o.requires
cat/CMakeFiles/Cat.dir/requires: cat/CMakeFiles/Cat.dir/G__CatDict.cxx.o.requires

.PHONY : cat/CMakeFiles/Cat.dir/requires

cat/CMakeFiles/Cat.dir/clean:
	cd /home/alex/bmnroot_dev/bmnroot/build/cat && $(CMAKE_COMMAND) -P CMakeFiles/Cat.dir/cmake_clean.cmake
.PHONY : cat/CMakeFiles/Cat.dir/clean

cat/CMakeFiles/Cat.dir/depend: cat/G__CatDict.cxx
cat/CMakeFiles/Cat.dir/depend: cat/G__CatDict_rdict.pcm
cat/CMakeFiles/Cat.dir/depend: lib/libCat.rootmap
	cd /home/alex/bmnroot_dev/bmnroot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/bmnroot_dev/bmnroot /home/alex/bmnroot_dev/bmnroot/cat /home/alex/bmnroot_dev/bmnroot/build /home/alex/bmnroot_dev/bmnroot/build/cat /home/alex/bmnroot_dev/bmnroot/build/cat/CMakeFiles/Cat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cat/CMakeFiles/Cat.dir/depend
