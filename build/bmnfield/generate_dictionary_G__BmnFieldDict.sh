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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/bmnfield/G__BmnFieldDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libBmnField.rootmap -rml BmnField.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/bmnfield -I/opt/fairsoft/install/include/root BmnNewFieldMap.h BmnFieldConst.h BmnFieldContFact.h BmnFieldMap.h BmnFieldMapCreator.h BmnFieldMapData.h BmnFieldMapSym3.h BmnFieldPar.h BmnFieldCreator.h BmnSP41FieldMapCreator.h FieldLinkDef.h
