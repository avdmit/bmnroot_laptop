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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/uni_db/G__UniDbDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libUniDb.rootmap -rml UniDb.so -c   -I/opt/fairsoft/install/include/root -I/usr/include/libxml2 -I/home/alex/bmnroot_dev/bmnroot/uni_db -I/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes -I/home/alex/bmnroot_dev/bmnroot/uni_db/elog_classes -I/opt/fairsoft/install/include/root -I/usr/include/libxml2 UniDbConnection.h UniDbGeoConverter.h UniDbGenerateClasses.h UniDbTangoData.h UniDbSearchCondition.h db_structures.h db_classes/UniDbRunPeriod.h db_classes/UniDbRun.h db_classes/UniDbRunGeometry.h db_classes/UniDbDetector.h db_classes/UniDbParameter.h db_classes/UniDbDetectorParameter.h db_classes/UniDbSimulationFile.h elog_classes/ElogDbPerson.h elog_classes/ElogDbType.h elog_classes/ElogDbTrigger.h elog_classes/ElogDbBeam.h elog_classes/ElogDbTarget.h elog_classes/ElogDbRecord.h elog_classes/ElogDbAttachment.h UniDbLinkDef.h
