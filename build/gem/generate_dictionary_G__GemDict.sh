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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/gem/G__GemDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libGem.rootmap -rml Gem.so -c  -DBOOST_FOUND -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/bmndata/cbm -I/home/alex/bmnroot_dev/bmnroot/bmndata/math -I/home/alex/bmnroot_dev/bmnroot/bmnfield -I/home/alex/bmnroot_dev/bmnroot/silicon -I/home/alex/bmnroot_dev/bmnroot/alignment -I/home/alex/bmnroot_dev/bmnroot/globaltracking -I/home/alex/bmnroot_dev/bmnroot/uni_db -I/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes -I/home/alex/bmnroot_dev/bmnroot/steering -I/home/alex/bmnroot_dev/bmnroot/gem -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root BmnGemHitProducer.h BmnGemGeo.h BmnGemDigit.h BmnGemGas.h BmnManageQA.h BmnGemDigitizerQAHistograms.h BmnGemTracking.h BmnGemStripLayer.h BmnGemStripModule.h BmnGemStripStation.h BmnGemStripStationSet.h BmnGemStripStation_RunSummer2016.h BmnGemStripStationSet_RunSummer2016.h BmnGemStripStation_RunWinter2016.h BmnGemStripStationSet_RunWinter2016.h BmnGemStripStation_RunSpring2017.h BmnGemStripStationSet_RunSpring2017.h BmnGemStripDigit.h BmnGemStripDigitizer.h BmnGemStripHitMaker.h BmnKalmanFilter.h BmnGemStripMedium.h BmnMaterialEffects.h GemLinkDef.h
