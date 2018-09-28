# Install script for directory: /home/alex/bmnroot_dev/bmnroot/KF

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
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKF.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFFieldMath.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFHit.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFMaterial.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFMath.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFPixelMeasurement.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFPrimaryVertexFinder.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFTrackInterface.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFUMeasurement.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFVertexInterface.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/CbmKFParticle.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/Interface/CbmKFStsHit.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/Interface/CbmKFTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/Interface/CbmKFVertex.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/Interface/CbmPVFinderKF.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/Interface/CbmStsKFTrackFitter.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/KFQA/KFParticleMatch.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/KFQA/KFMCParticle.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/KFQA/CbmKFPartEfficiencies.h"
    "/home/alex/bmnroot_dev/bmnroot/KF/KFParticlesFinder/CbmKFParticleDatabase.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/G__KFDict_rdict.pcm"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libKF.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libKF.so.0.0.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libKF.so.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libKF.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF.so"
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

