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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/dch/G__DchDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libDch.rootmap -rml Dch.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/mcstack -I/home/alex/bmnroot_dev/bmnroot/passive -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/bmndata/math -I/home/alex/bmnroot_dev/bmnroot/bmnfield -I/home/alex/bmnroot_dev/bmnroot/gem -I/home/alex/bmnroot_dev/bmnroot/uni_db -I/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes -I/home/alex/bmnroot_dev/bmnroot/dch -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root -I/opt/fairsoft/install/include/TGeant3 BmnDch.h BmnDchPoint.h BmnDchContFact.h BmnDchGeo.h BmnDchGeoPar.h BmnDchHitProducer.h BmnDchHitProducerTmp.h BmnDchHitProducer_exp.h DchTrackCand.h DchTrackManager.h ScalarD.h ScalarI.h ScalarUI.h DchHitPlane.h BmnDchTrackFinder.h BmnDchTrack.h LinkDef.h
