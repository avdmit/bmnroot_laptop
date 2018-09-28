# Install script for directory: /home/alex/bmnroot_dev/bmnroot/tof1

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
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Point.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1ContFact.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Geo.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1GeoPar.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1HitProducer.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1HitProducerIdeal.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTof1GeoUtils.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1TDC.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Detector.h"
    "/home/alex/bmnroot_dev/bmnroot/tof1/BmnTOF1Conteiner.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/G__TOF1Dict_rdict.pcm"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libTOF1.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libTOF1.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libTOF1.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libTOF1.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libTOF1.so.0.0.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libTOF1.so.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libTOF1.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libTOF1.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libTOF1.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libTOF1.so"
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

