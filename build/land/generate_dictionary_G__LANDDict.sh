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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/land/G__LANDDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libLAND.rootmap -rml LAND.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/mcstack -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/home/alex/bmnroot_dev/bmnroot/land -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root BmnLANDHit.h BmnLANDHitProducer.h BmnLANDLinkDef.h