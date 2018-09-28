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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/monitor/G__BmnMonitorDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libBmnMonitor.rootmap -rml BmnMonitor.so -c  -DBOOST_FOUND -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/bmndata/math -I/home/alex/bmnroot_dev/bmnroot/bmnfield -I/home/alex/bmnroot_dev/bmnroot/gem -I/home/alex/bmnroot_dev/bmnroot/silicon -I/home/alex/bmnroot_dev/bmnroot/dch -I/home/alex/bmnroot_dev/bmnroot/globaltracking -I/home/alex/bmnroot_dev/bmnroot/decoder -I/home/alex/bmnroot_dev/bmnroot/monitor -I/home/alex/bmnroot_dev/bmnroot/uni_db -I/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root -I/usr/include/libxml2 BmnRunInfo.h BmnMonitor.h BmnDataReceiver.h BmnOnlineDecoder.h BmnHist.h BmnHistGem.h BmnHistSilicon.h BmnHistDch.h BmnHistMwpc.h BmnHistZDC.h BmnHistECAL.h BmnHistTrigger.h BmnHistToF.h BmnHistToF700.h BmnHistSrc.h BmnHistLAND.h MonitorLinkDef.h
