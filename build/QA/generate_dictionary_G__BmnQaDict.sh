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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/QA/G__BmnQaDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libBmnQa.rootmap -rml BmnQa.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/bmndata/cbm -I/home/alex/bmnroot_dev/bmnroot/bmndata/math -I/home/alex/bmnroot_dev/bmnroot/gem -I/home/alex/bmnroot_dev/bmnroot/silicon -I/home/alex/bmnroot_dev/bmnroot/sts -I/home/alex/bmnroot_dev/bmnroot/globaltracking -I/home/alex/bmnroot_dev/bmnroot/QA -I/home/alex/bmnroot_dev/bmnroot/QA/report -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root BmnTrackingQa.h BmnClusteringQa.h BmnUtils.h BmnTrackingQaReport.h BmnClusteringQaReport.h BmnMCTrack.h BmnMCTrackCreator.h BmnAcceptanceFunction.h report/BmnSimulationReport.h report/BmnStudyReport.h report/BmnHtmlReportElement.h report/BmnReport.h report/BmnDrawHist.h report/BmnHistManager.h BmnMatchRecoToMC.h BmnQALinkDef.h
