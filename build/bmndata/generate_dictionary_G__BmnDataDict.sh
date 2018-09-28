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

/opt/fairsoft/install/bin/rootcint -f /home/alex/bmnroot_dev/bmnroot/build/bmndata/G__BmnDataDict.cxx -inlineInputHeader -rmf /home/alex/bmnroot_dev/bmnroot/build/lib/libBmnData.rootmap -rml BmnData.so -c   -I/opt/fairroot/install/include -I/home/alex/bmnroot_dev/bmnroot/globaltracking -I/home/alex/bmnroot_dev/bmnroot/uni_db -I/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes -I/home/alex/bmnroot_dev/bmnroot/bmndata -I/opt/fairsoft/install/include -I/opt/fairsoft/install/include/root CbmBaseHit.h CbmHit.h CbmPixelHit.h CbmDetectorList.h CbmStack.h CbmMCTrack.h CbmStsPoint.h CbmStsDetectorId.h CbmStsDigi.h CbmStsDigiMatch.h CbmMCBuffer.h CbmMvdPoint.h CbmMvdDetectorId.h CbmTofPoint.h CbmTofHit.h CbmTofTrack.h CbmEcalPoint.h CbmDaqBuffer.h CbmDigi.h CbmStsDigiLight.h CbmStsHit.h CbmStsCluster.h CbmStsTrack.h CbmTrackMatch.h CbmMvdHit.h CbmMvdHitMatch.h CbmGlobalTrack.h CbmPsdPoint.h CbmPsdHit.h CbmPsdDigi.h CbmPsdEventData.h CbmMvdGeoPar.h CbmGeoSttPar.h BmnDchHit.h BmnDchHitOriginal.h BmnGlobalTrack.h BmnMwpcHit.h BmnTofHit.h BmnTrackMatch.h BmnMwpcDigit.h BmnTof1Digit.h BmnTof2Digit.h BmnTrigDigit.h BmnTrigWaveDigit.h BmnDchDigit.h BmnEcalDigit.h BmnADCDigit.h BmnTacquilaDigit.h BmnTQDCADCDigit.h BmnTDCDigit.h BmnHRBDigit.h BmnSyncDigit.h BmnTTBDigit.h BmnMSCDigit.h BmnZDCDigit.h BmnECALDigit.h BmnLANDDigit.h BmnCscDigit.h BmnEventHeader.h BmnRunHeader.h BmnCounterTask.h BmnIdentifiableTrack.h BmnFitNode.h BmnEnums.h DigiArrays.h BmnEventQuality.h BmnGemStripHit.h BmnGemTrack.h cbm/CbmVertex.h cbm/CbmStsTrackFinder.h cbm/CbmStsTrackFitter.h cbm/CbmTofMerger.h cbm/CbmTrackMerger.h cbm/CbmPrimaryVertexFinder.h cbm/CbmFindPrimaryVertex.h math/BmnMath.h math/BmnMatrixMath.h math/FitWLSQ.h BmnFileSource.h BmnGeoNavigator.h BmnTrack.h BmnHit.h BmnLink.h BmnMatch.h BmnTrigInfo.h BmnDataLinkDef.h
