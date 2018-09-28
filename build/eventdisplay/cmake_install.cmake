# Install script for directory: /home/alex/bmnroot_dev/bmnroot/eventdisplay

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
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdEventManager.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdMCTracks.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdMCStack.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdEventManagerEditor.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdMCTracksEditor.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdBoxSet.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdBoxSetDraw.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdBoxSetEditor.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdPointSetDraw.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdMCPointDraw.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdHitDraw.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdHitPointSetDraw.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/FairXMLNode.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/MpdWebScreenshots.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/bmn/BmnTrackDrawH.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/bmn/BmnTrackDrawP.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/bmn/BmnGlobalTrackDraw.h"
    "/home/alex/bmnroot_dev/bmnroot/eventdisplay/bmn/FairMCModuleDraw.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/G__EventDisplayDict_rdict.pcm"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libEventDisplay.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEventDisplay.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEventDisplay.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEventDisplay.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libEventDisplay.so.0.0.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libEventDisplay.so.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libEventDisplay.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEventDisplay.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEventDisplay.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEventDisplay.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/opt/fairsoft/install/lib/root:/opt/fairroot/install/lib:/home/alex/bmnroot_dev/bmnroot/build/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

