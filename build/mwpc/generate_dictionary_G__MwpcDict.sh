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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/mwpc/G__MwpcDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libMwpc.rootmap -rml Mwpc.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/mcstack -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/bmndata/math -I/home/alex/bmnroot_dev/bmnroot/gem -I/home/alex/bmnroot_dev/bmnroot/mwpc -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root BmnMwpcHitProducer.h BmnMwpcHitFinder.h BmnMwpcGeometry.h BmnMwpcGeometrySRC.h BmnMwpcTrack.h BmnMwpcTrackFinder.h BmnMwpc.h BmnMwpcContFact.h BmnMwpcGeo.h BmnMwpcGeoPar.h BmnMwpcPoint.h LinkDef.h
