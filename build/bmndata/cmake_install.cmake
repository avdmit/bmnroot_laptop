# Install script for directory: /home/alex/bmnroot_dev/bmnroot/bmndata

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmBaseHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmPixelHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmDetectorList.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmStack.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmMCTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmStsPoint.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmStsDetectorId.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmStsDigi.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmStsDigiMatch.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmMCBuffer.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmMvdPoint.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmMvdDetectorId.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmTofPoint.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmTofHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmTofTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmEcalPoint.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmDaqBuffer.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmDigi.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmStsDigiLight.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmStsHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmStsCluster.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmStsTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmTrackMatch.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmMvdHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmMvdHitMatch.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmGlobalTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmPsdPoint.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmPsdHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmPsdDigi.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmPsdEventData.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmMvdGeoPar.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/CbmGeoSttPar.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnDchHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnDchHitOriginal.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnGlobalTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnMwpcHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTofHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTrackMatch.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnMwpcDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTof1Digit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTof2Digit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTrigDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTrigWaveDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnDchDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnEcalDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnADCDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTacquilaDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTQDCADCDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTDCDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnHRBDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnSyncDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTTBDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnMSCDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnZDCDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnECALDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnLANDDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnCscDigit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnEventHeader.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnRunHeader.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnCounterTask.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnIdentifiableTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnFitNode.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnEnums.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/DigiArrays.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnEventQuality.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnGemStripHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnGemTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/cbm/CbmVertex.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/cbm/CbmStsTrackFinder.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/cbm/CbmStsTrackFitter.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/cbm/CbmTofMerger.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/cbm/CbmTrackMerger.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/cbm/CbmPrimaryVertexFinder.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/cbm/CbmFindPrimaryVertex.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/math/BmnMath.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/math/BmnMatrixMath.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/math/FitWLSQ.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnFileSource.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnGeoNavigator.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnHit.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnLink.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnMatch.h"
    "/home/alex/bmnroot_dev/bmnroot/bmndata/BmnTrigInfo.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/G__BmnDataDict_rdict.pcm"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnData.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnData.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnData.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnData.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnData.so.0.0.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnData.so.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnData.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnData.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnData.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnData.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/opt/fairsoft/install/lib/root:/opt/fairroot/install/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

