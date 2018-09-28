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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/sts/G__StsDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libSts.rootmap -rml Sts.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/passive -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/bmndata/cbm -I/home/alex/bmnroot_dev/bmnroot/sts -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root CbmGeoSts.h CbmGeoStsPar.h CbmSts.h CbmStsContFact.h CbmStsDigiPar.h CbmStsDigiScheme.h CbmStsIdealDigitize.h CbmStsDigitize.h CbmStsDigitizeTb.h CbmStsIdealFindHits.h CbmStsClusterFinder.h CbmStsFindHits.h CbmStsFindTracks.h CbmStsFindTracksQa.h CbmStsFitTracks.h CbmStsHitProducerIdeal.h CbmStsIdealMatchHits.h CbmStsMatchHits.h CbmStsMatchTracks.h CbmStsParAsciiFileIo.h CbmStsParRootFileIo.h CbmStsRadTool.h CbmStsSensor.h CbmStsSensorDigiPar.h CbmStsSector.h CbmStsSectorDigiPar.h CbmStsStation.h CbmStsStationDigiPar.h CbmStsTrackFinderIdeal.h CbmStsTrackFitterIdeal.h CbmStsSimulationQa.h CbmStsFindHitsQa.h CbmStsReconstructionQa.h StsLinkDef.h
