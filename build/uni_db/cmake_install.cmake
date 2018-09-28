# Install script for directory: /home/alex/bmnroot_dev/bmnroot/uni_db

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
    "/home/alex/bmnroot_dev/bmnroot/uni_db/UniDbConnection.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/UniDbGeoConverter.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/UniDbGenerateClasses.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/UniDbTangoData.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/UniDbSearchCondition.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/db_structures.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes/UniDbRunPeriod.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes/UniDbRun.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes/UniDbRunGeometry.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes/UniDbDetector.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes/UniDbParameter.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes/UniDbDetectorParameter.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes/UniDbSimulationFile.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/elog_classes/ElogDbPerson.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/elog_classes/ElogDbType.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/elog_classes/ElogDbTrigger.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/elog_classes/ElogDbBeam.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/elog_classes/ElogDbTarget.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/elog_classes/ElogDbRecord.h"
    "/home/alex/bmnroot_dev/bmnroot/uni_db/elog_classes/ElogDbAttachment.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/G__UniDbDict_rdict.pcm"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libUniDb.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libUniDb.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libUniDb.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libUniDb.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libUniDb.so.0.0.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libUniDb.so.0"
    "/home/alex/bmnroot_dev/bmnroot/build/lib/libUniDb.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libUniDb.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libUniDb.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libUniDb.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/opt/fairsoft/install/lib/root:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

