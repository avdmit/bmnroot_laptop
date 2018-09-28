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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/identification/G__BmnIdentificationDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libBmnIdentification.rootmap -rml BmnIdentification.so -c  -DBOOST_FOUND -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/bmndata/cbm -I/home/alex/bmnroot_dev/bmnroot/bmndata/math -I/home/alex/bmnroot_dev/bmnroot/bmnfield -I/home/alex/bmnroot_dev/bmnroot/gem -I/home/alex/bmnroot_dev/bmnroot/silicon -I/home/alex/bmnroot_dev/bmnroot/dch -I/home/alex/bmnroot_dev/bmnroot/mwpc -I/home/alex/bmnroot_dev/bmnroot/globaltracking -I/home/alex/bmnroot_dev/bmnroot/decoder -I/home/alex/bmnroot_dev/bmnroot/identification -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root BmnTofIdentification.h IdentLinkDef.h
