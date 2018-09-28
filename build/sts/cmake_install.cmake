# Install script for directory: /home/alex/bmnroot_dev/bmnroot/sts

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
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmGeoSts.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmGeoStsPar.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmSts.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsContFact.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsDigiPar.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsDigiScheme.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsIdealDigitize.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsDigitize.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsDigitizeTb.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsIdealFindHits.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsClusterFinder.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsFindHits.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsFindTracks.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsFindTracksQa.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsFitTracks.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsHitProducerIdeal.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsIdealMatchHits.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsMatchHits.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsMatchTracks.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsParAsciiFileIo.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsParRootFileIo.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsRadTool.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsSensor.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsSensorDigiPar.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsSector.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsSectorDigiPar.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsStation.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsStationDigiPar.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsTrackFinderIdeal.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsTrackFitterIdeal.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsSimulationQa.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsFindHitsQa.h"
    "/home/alex/bmnroot_dev/bmnroot/sts/CbmStsReconstructionQa.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/G__StsDict_rdict.pcm"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libSts.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSts.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSts.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSts.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libSts.so.0.0.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libSts.so.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libSts.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSts.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSts.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSts.so"
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

