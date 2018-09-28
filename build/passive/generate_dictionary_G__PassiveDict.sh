#!/bin/bash

# This macro is used to generate the ROOT dictionaries
# To use the ctest launchers one needs some environment variables which
# are only present when running CMake. To have the same environment at
# the time the dictionary is build this script is used which is build
# at the time cmake runs.

# Setup the needed environment
export LD_LIBRARY_PATH=/opt/fairsoft/install/lib/root::/opt/fairsoft/install/lib:/opt/fairsoft/install/lib:/opt/fairsoft/install/lib/root:/opt/fairsoft/install/lib:/opt/fairsoft/install/lib:/opt/fairsoft/install/lib/root:
export DYLD_LIBRARY_PATH=/opt/fairsoft/install/lib/root::/opt/fairsoft/install/lib:/opt/fairsoft/install/lib:/opt/fairsoft/install/lib/root:/opt/fairsoft/install/lib:/opt/fairsoft/install/lib:/opt/fairsoft/install/lib/root:
export ROOTSYS=/opt/fairsoft/install

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/passive/G__PassiveDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libPassive.rootmap -rml Passive.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/passive -I/opt/fairsoft/install/include/root -I/opt/fairsoft/install/include FairCave.h FairGeoCave.h FairGeoMagnet.h FairGeoPassivePar.h FairGeoPipe.h FairGeoTarget.h FairMagnet.h FairPassiveContFact.h FairPipe.h FairTarget.h PassiveLinkDef.h
