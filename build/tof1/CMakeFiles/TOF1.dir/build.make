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
include tof1/CMakeFiles/TOF1.dir/depend.make

# Include the progress variables for this target.
include tof1/CMakeFiles/TOF1.dir/progress.make

# Include the compile flags for this target's objects.
include tof1/CMakeFiles/TOF1.dir/flags.make

tof1/G__TOF1Dict.cxx: ../tof1/BmnTOF1.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTOF1Point.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTOF1ContFact.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTOF1Geo.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTOF1GeoPar.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTof1HitProducer.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTof1HitProducerIdeal.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTof1GeoUtils.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTOF1TDC.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTOF1Detector.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTOF1Conteiner.h
tof1/G__TOF1Dict.cxx: ../tof1/BmnTOF1LinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__TOF1Dict.cxx, G__TOF1Dict_rdict.pcm, ../lib/libTOF1.rootmap"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && ./generate_dictionary_G__TOF1Dict.sh
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/cmake -E copy_if_different /home/alex/bmnroot_dev/bmnroot/build/tof1/G__TOF1Dict_rdict.pcm /home/alex/bmnroot_dev/bmnroot/build/lib/G__TOF1Dict_rdict.pcm

tof1/G__TOF1Dict_rdict.pcm: tof1/G__TOF1Dict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate tof1/G__TOF1Dict_rdict.pcm

lib/libTOF1.rootmap: tof1/G__TOF1Dict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libTOF1.rootmap

tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o: ../tof1/BmnTOF1.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTOF1.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1.cxx

tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTOF1.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1.cxx > CMakeFiles/TOF1.dir/BmnTOF1.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTOF1.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1.cxx -o CMakeFiles/TOF1.dir/BmnTOF1.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o: ../tof1/BmnTOF1Point.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Point.cxx

tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Point.cxx > CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Point.cxx -o CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o: ../tof1/BmnTOF1ContFact.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1ContFact.cxx

tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1ContFact.cxx > CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1ContFact.cxx -o CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o: ../tof1/BmnTOF1Geo.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Geo.cxx

tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Geo.cxx > CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Geo.cxx -o CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o: ../tof1/BmnTOF1GeoPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1GeoPar.cxx

tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1GeoPar.cxx > CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1GeoPar.cxx -o CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o: ../tof1/BmnTof1HitProducer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1HitProducer.cxx

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1HitProducer.cxx > CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1HitProducer.cxx -o CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o: ../tof1/BmnTof1HitProducerIdeal.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1HitProducerIdeal.cxx

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1HitProducerIdeal.cxx > CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1HitProducerIdeal.cxx -o CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o: ../tof1/BmnTof1GeoUtils.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1GeoUtils.cxx

tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1GeoUtils.cxx > CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1GeoUtils.cxx -o CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o: ../tof1/BmnTOF1TDC.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1TDC.cxx

tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1TDC.cxx > CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1TDC.cxx -o CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o: ../tof1/BmnTOF1Detector.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Detector.cxx

tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Detector.cxx > CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Detector.cxx -o CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o


tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o: ../tof1/BmnTOF1Conteiner.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o -c /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Conteiner.cxx

tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Conteiner.cxx > CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.i

tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Conteiner.cxx -o CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.s

tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o


tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o: tof1/CMakeFiles/TOF1.dir/flags.make
tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o: tof1/G__TOF1Dict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o -c /home/alex/bmnroot_dev/bmnroot/build/tof1/G__TOF1Dict.cxx

tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /home/alex/bmnroot_dev/bmnroot/build/tof1/G__TOF1Dict.cxx > CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.i

tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /home/alex/bmnroot_dev/bmnroot/build/tof1/G__TOF1Dict.cxx -o CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.s

tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o.requires:

.PHONY : tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o.requires

tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o.provides: tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o.requires
	$(MAKE) -f tof1/CMakeFiles/TOF1.dir/build.make tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o.provides.build
.PHONY : tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o.provides

tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o.provides.build: tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o


# Object files for target TOF1
TOF1_OBJECTS = \
"CMakeFiles/TOF1.dir/BmnTOF1.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o" \
"CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o" \
"CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o"

# External object files for target TOF1
TOF1_EXTERNAL_OBJECTS =

lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/build.make
lib/libTOF1.so.0.0.0: lib/libBmnData.so.0.0.0
lib/libTOF1.so.0.0.0: tof1/CMakeFiles/TOF1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX shared library ../lib/libTOF1.so"
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TOF1.dir/link.txt --verbose=$(VERBOSE)
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libTOF1.so.0.0.0 ../lib/libTOF1.so.0 ../lib/libTOF1.so

lib/libTOF1.so.0: lib/libTOF1.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libTOF1.so.0

lib/libTOF1.so: lib/libTOF1.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libTOF1.so

# Rule to build all files generated by this target.
tof1/CMakeFiles/TOF1.dir/build: lib/libTOF1.so

.PHONY : tof1/CMakeFiles/TOF1.dir/build

tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTOF1.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTOF1Point.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTOF1ContFact.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTOF1Geo.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTOF1GeoPar.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducer.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTof1HitProducerIdeal.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTof1GeoUtils.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTOF1TDC.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTOF1Detector.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/BmnTOF1Conteiner.cxx.o.requires
tof1/CMakeFiles/TOF1.dir/requires: tof1/CMakeFiles/TOF1.dir/G__TOF1Dict.cxx.o.requires

.PHONY : tof1/CMakeFiles/TOF1.dir/requires

tof1/CMakeFiles/TOF1.dir/clean:
	cd /home/alex/bmnroot_dev/bmnroot/build/tof1 && $(CMAKE_COMMAND) -P CMakeFiles/TOF1.dir/cmake_clean.cmake
.PHONY : tof1/CMakeFiles/TOF1.dir/clean

tof1/CMakeFiles/TOF1.dir/depend: tof1/G__TOF1Dict.cxx
tof1/CMakeFiles/TOF1.dir/depend: tof1/G__TOF1Dict_rdict.pcm
tof1/CMakeFiles/TOF1.dir/depend: lib/libTOF1.rootmap
	cd /home/alex/bmnroot_dev/bmnroot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/bmnroot_dev/bmnroot /home/alex/bmnroot_dev/bmnroot/tof1 /home/alex/bmnroot_dev/bmnroot/build /home/alex/bmnroot_dev/bmnroot/build/tof1 /home/alex/bmnroot_dev/bmnroot/build/tof1/CMakeFiles/TOF1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tof1/CMakeFiles/TOF1.dir/depend
