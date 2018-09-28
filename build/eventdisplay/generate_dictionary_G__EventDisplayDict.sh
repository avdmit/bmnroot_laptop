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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/eventdisplay/G__EventDisplayDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libEventDisplay.rootmap -rml EventDisplay.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/config -I/home/alex/bmnroot_dev/bmnroot/eventdisplay -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/globaltracking -I/home/alex/bmnroot_dev/bmnroot/gem -I/home/alex/bmnroot_dev/bmnroot/uni_db -I/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes -I/home/alex/bmnroot_dev/bmnroot/silicon -I/opt/fairsoft/install/include/root -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/TGeant3 -I/usr/include/libxml2 MpdEventManager.h MpdMCTracks.h MpdMCStack.h MpdEventManagerEditor.h MpdMCTracksEditor.h MpdBoxSet.h MpdBoxSetDraw.h MpdBoxSetEditor.h MpdPointSetDraw.h MpdMCPointDraw.h MpdHitDraw.h MpdHitPointSetDraw.h FairXMLNode.h MpdWebScreenshots.h bmn/BmnTrackDrawH.h bmn/BmnTrackDrawP.h bmn/BmnGlobalTrackDraw.h bmn/FairMCModuleDraw.h bmn/EventBLinkDef.h
