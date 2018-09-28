# Install script for directory: /home/alex/bmnroot_dev/bmnroot/QA

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
    "/home/alex/bmnroot_dev/bmnroot/QA/BmnTrackingQa.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/BmnClusteringQa.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/BmnUtils.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/BmnTrackingQaReport.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/BmnClusteringQaReport.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/BmnMCTrack.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/BmnMCTrackCreator.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/BmnAcceptanceFunction.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/report/BmnSimulationReport.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/report/BmnStudyReport.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/report/BmnHtmlReportElement.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/report/BmnReport.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/report/BmnDrawHist.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/report/BmnHistManager.h"
    "/home/alex/bmnroot_dev/bmnroot/QA/BmnMatchRecoToMC.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/G__BmnQaDict_rdict.pcm"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnQa.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnQa.so.0.0.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnQa.so.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libBmnQa.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so"
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

