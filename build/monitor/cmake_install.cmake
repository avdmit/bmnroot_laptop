# Install script for directory: /home/alex/bmnroot_dev/bmnroot/monitor

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
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnRunInfo.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnMonitor.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnDataReceiver.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnOnlineDecoder.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHist.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistGem.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistSilicon.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistDch.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistMwpc.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistZDC.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistECAL.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistTrigger.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistToF.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistToF700.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistSrc.h"
    "/home/alex/bmnroot_dev/bmnroot/monitor/BmnHistLAND.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/G__BmnMonitorDict_rdict.pcm"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnMonitor.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnMonitor.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnMonitor.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnMonitor.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnMonitor.so.0.0.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnMonitor.so.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnMonitor.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnMonitor.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnMonitor.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnMonitor.so"
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

