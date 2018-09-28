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
include zdc/CMakeFiles/Zdc.dir/depend.make

# Include the progress variables for this target.
include zdc/CMakeFiles/Zdc.dir/progress.make

# Include the compile flags for this target's objects.
include zdc/CMakeFiles/Zdc.dir/flags.make

zdc/G__ZdcDict.cxx: ../zdc/BmnZdc.h
zdc/G__ZdcDict.cxx: ../zdc/BmnZdcPoint.h
zdc/G__ZdcDict.cxx: ../zdc/BmnZdcContFact.h
zdc/G__ZdcDict.cxx: ../zdc/BmnZdcGeo.h
zdc/G__ZdcDict.cxx: ../zdc/BmnZdcGeoPar.h
zdc/G__ZdcDict.cxx: ../zdc/BmnZdcDigi.h
zdc/G__ZdcDict.cxx: ../zdc/BmnZdcDigiPar.h
zdc/G__ZdcDict.cxx: ../zdc/BmnZdcDigiScheme.h
zdc/G__ZdcDict.cxx: ../zdc/BmnZdcDigiProducer.h
zdc/G__ZdcDict.cxx: ../zdc/BmnZdcLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__ZdcDict.cxx, G__ZdcDict_rdict.pcm, ../lib/libZdc.rootmap"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && ./generate_dictionary_G__ZdcDict.sh
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/cmake -E copy_if_different /home/alex/bmnroot_dev/bmnroot/build/zdc/G__ZdcDict_rdict.pcm /home/alex/bmnroot_dev/bmnroot/build/lib/G__ZdcDict_rdict.pcm

zdc/G__ZdcDict_rdict.pcm: zdc/G__ZdcDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate zdc/G__ZdcDict_rdict.pcm

lib/libZdc.rootmap: zdc/G__ZdcDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libZdc.rootmap

zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o: ../zdc/BmnZdc.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zdc.dir/BmnZdc.cxx.o -c /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdc.cxx

zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/BmnZdc.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdc.cxx > CMakeFiles/Zdc.dir/BmnZdc.cxx.i

zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/BmnZdc.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdc.cxx -o CMakeFiles/Zdc.dir/BmnZdc.cxx.s

zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o


zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o: ../zdc/BmnZdcPoint.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o -c /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcPoint.cxx

zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcPoint.cxx > CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.i

zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcPoint.cxx -o CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.s

zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o


zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o: ../zdc/BmnZdcContFact.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o -c /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcContFact.cxx

zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcContFact.cxx > CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.i

zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcContFact.cxx -o CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.s

zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o


zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o: ../zdc/BmnZdcGeo.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o -c /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcGeo.cxx

zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcGeo.cxx > CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.i

zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcGeo.cxx -o CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.s

zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o


zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o: ../zdc/BmnZdcGeoPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o -c /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcGeoPar.cxx

zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcGeoPar.cxx > CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.i

zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcGeoPar.cxx -o CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.s

zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o


zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o: ../zdc/BmnZdcDigi.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o -c /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigi.cxx

zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigi.cxx > CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.i

zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigi.cxx -o CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.s

zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o


zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o: ../zdc/BmnZdcDigiPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o -c /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigiPar.cxx

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigiPar.cxx > CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.i

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigiPar.cxx -o CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.s

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o


zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o: ../zdc/BmnZdcDigiScheme.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o -c /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigiScheme.cxx

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigiScheme.cxx > CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.i

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigiScheme.cxx -o CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.s

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o


zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o: ../zdc/BmnZdcDigiProducer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o -c /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigiProducer.cxx

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigiProducer.cxx > CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.i

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex/bmnroot_dev/bmnroot/zdc/BmnZdcDigiProducer.cxx -o CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.s

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o


zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o: zdc/CMakeFiles/Zdc.dir/flags.make
zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o: zdc/G__ZdcDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o -c /home/alex/bmnroot_dev/bmnroot/build/zdc/G__ZdcDict.cxx

zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zdc.dir/G__ZdcDict.cxx.i"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /home/alex/bmnroot_dev/bmnroot/build/zdc/G__ZdcDict.cxx > CMakeFiles/Zdc.dir/G__ZdcDict.cxx.i

zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zdc.dir/G__ZdcDict.cxx.s"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /home/alex/bmnroot_dev/bmnroot/build/zdc/G__ZdcDict.cxx -o CMakeFiles/Zdc.dir/G__ZdcDict.cxx.s

zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o.requires:

.PHONY : zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o.requires

zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o.provides: zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o.requires
	$(MAKE) -f zdc/CMakeFiles/Zdc.dir/build.make zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o.provides.build
.PHONY : zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o.provides

zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o.provides.build: zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o


# Object files for target Zdc
Zdc_OBJECTS = \
"CMakeFiles/Zdc.dir/BmnZdc.cxx.o" \
"CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o" \
"CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o" \
"CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o" \
"CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o" \
"CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o" \
"CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o" \
"CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o" \
"CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o" \
"CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o"

# External object files for target Zdc
Zdc_EXTERNAL_OBJECTS =

lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/build.make
lib/libZdc.so.0.0.0: zdc/CMakeFiles/Zdc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex/bmnroot_dev/bmnroot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX shared library ../lib/libZdc.so"
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Zdc.dir/link.txt --verbose=$(VERBOSE)
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libZdc.so.0.0.0 ../lib/libZdc.so.0 ../lib/libZdc.so

lib/libZdc.so.0: lib/libZdc.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libZdc.so.0

lib/libZdc.so: lib/libZdc.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libZdc.so

# Rule to build all files generated by this target.
zdc/CMakeFiles/Zdc.dir/build: lib/libZdc.so

.PHONY : zdc/CMakeFiles/Zdc.dir/build

zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/BmnZdc.cxx.o.requires
zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/BmnZdcPoint.cxx.o.requires
zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/BmnZdcContFact.cxx.o.requires
zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/BmnZdcGeo.cxx.o.requires
zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/BmnZdcGeoPar.cxx.o.requires
zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/BmnZdcDigi.cxx.o.requires
zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiPar.cxx.o.requires
zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiScheme.cxx.o.requires
zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/BmnZdcDigiProducer.cxx.o.requires
zdc/CMakeFiles/Zdc.dir/requires: zdc/CMakeFiles/Zdc.dir/G__ZdcDict.cxx.o.requires

.PHONY : zdc/CMakeFiles/Zdc.dir/requires

zdc/CMakeFiles/Zdc.dir/clean:
	cd /home/alex/bmnroot_dev/bmnroot/build/zdc && $(CMAKE_COMMAND) -P CMakeFiles/Zdc.dir/cmake_clean.cmake
.PHONY : zdc/CMakeFiles/Zdc.dir/clean

zdc/CMakeFiles/Zdc.dir/depend: zdc/G__ZdcDict.cxx
zdc/CMakeFiles/Zdc.dir/depend: zdc/G__ZdcDict_rdict.pcm
zdc/CMakeFiles/Zdc.dir/depend: lib/libZdc.rootmap
	cd /home/alex/bmnroot_dev/bmnroot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/bmnroot_dev/bmnroot /home/alex/bmnroot_dev/bmnroot/zdc /home/alex/bmnroot_dev/bmnroot/build /home/alex/bmnroot_dev/bmnroot/build/zdc /home/alex/bmnroot_dev/bmnroot/build/zdc/CMakeFiles/Zdc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : zdc/CMakeFiles/Zdc.dir/depend

