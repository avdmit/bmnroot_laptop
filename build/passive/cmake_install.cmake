# Install script for directory: /home/alex/bmnroot_dev/bmnroot/passive

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
    "/home/alex/bmnroot_dev/bmnroot/passive/FairCave.h"
    "/home/alex/bmnroot_dev/bmnroot/passive/FairGeoCave.h"
    "/home/alex/bmnroot_dev/bmnroot/passive/FairGeoMagnet.h"
    "/home/alex/bmnroot_dev/bmnroot/passive/FairGeoPassivePar.h"
    "/home/alex/bmnroot_dev/bmnroot/passive/FairGeoPipe.h"
    "/home/alex/bmnroot_dev/bmnroot/passive/FairGeoTarget.h"
    "/home/alex/bmnroot_dev/bmnroot/passive/FairMagnet.h"
    "/home/alex/bmnroot_dev/bmnroot/passive/FairPassiveContFact.h"
    "/home/alex/bmnroot_dev/bmnroot/passive/FairPipe.h"
    "/home/alex/bmnroot_dev/bmnroot/passive/FairTarget.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/G__PassiveDict_rdict.pcm"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libPassive.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPassive.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPassive.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPassive.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libPassive.so.0.0.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libPassive.so.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libPassive.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPassive.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPassive.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPassive.so"
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
