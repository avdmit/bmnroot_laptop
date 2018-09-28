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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/cat/G__CatDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libCat.rootmap -rml Cat.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/bmndata/cbm -I/home/alex/bmnroot_dev/bmnroot/sts -I/home/alex/bmnroot_dev/bmnroot/tof -I/home/alex/bmnroot_dev/bmnroot/KF -I/home/alex/bmnroot_dev/bmnroot/KF/KFQA -I/home/alex/bmnroot_dev/bmnroot/KF/Interface -I/home/alex/bmnroot_dev/bmnroot/KF/KFParticlesFinder -I/home/alex/bmnroot_dev/bmnroot/cat -I/home/alex/bmnroot_dev/bmnroot/cat/L1Algo -I/home/alex/bmnroot_dev/bmnroot/cat/OffLineInterface -I/home/alex/bmnroot_dev/bmnroot/cat/ParticleFinder -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root CbmL1.h CbmL1MCTrack.h CbmL1MCPoint.h CbmL1StsHit.h CbmL1Track.h CbmL1TrackPar.h CbmL1Vtx.h OffLineInterface/CbmL1StsTrackFinder.h CbmL1PartEfficiencies.h CatLinkDef.h
