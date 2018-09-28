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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/KF/G__KFDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libKF.rootmap -rml KF.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/passive -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/bmndata/cbm -I/home/alex/bmnroot_dev/bmnroot/bmnfield -I/home/alex/bmnroot_dev/bmnroot/tof -I/home/alex/bmnroot_dev/bmnroot/sts -I/home/alex/bmnroot_dev/bmnroot/cat -I/home/alex/bmnroot_dev/bmnroot/KF -I/home/alex/bmnroot_dev/bmnroot/KF/Interface -I/home/alex/bmnroot_dev/bmnroot/KF/KFQA -I/home/alex/bmnroot_dev/bmnroot/KF/KFParticle -I/home/alex/bmnroot_dev/bmnroot/KF/KFParticlesFinder -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root CbmKF.h CbmKFFieldMath.h CbmKFHit.h CbmKFMaterial.h CbmKFMath.h CbmKFPixelMeasurement.h CbmKFPrimaryVertexFinder.h CbmKFTrackInterface.h CbmKFUMeasurement.h CbmKFVertexInterface.h CbmKFParticle.h Interface/CbmKFStsHit.h Interface/CbmKFTrack.h Interface/CbmKFVertex.h Interface/CbmPVFinderKF.h Interface/CbmStsKFTrackFitter.h KFQA/KFParticleMatch.h KFQA/KFMCParticle.h KFQA/CbmKFPartEfficiencies.h KFParticlesFinder/CbmKFParticleDatabase.h KFLinkDef.h
