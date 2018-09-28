# Install script for directory: /home/alex/bmnroot_dev/bmnroot

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/alex/bmnroot_dev/bmnroot/build/passive/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/generators/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/bmndata/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/bmnfield/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/bd/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/dch/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/ecal/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/gem/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/land/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/mwpc/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/psd/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/recoil/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/silicon/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/sts/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/tof/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/tof1/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/zdc/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/decoder/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/QA/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/KF/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/cat/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/alignment/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/globaltracking/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/eventdisplay/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/uni_db/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/macro/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/monitor/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/physics/particles/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/steering/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/identification/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/ssd/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/waveforms/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/NA61/cmake_install.cmake")
  include("/home/alex/bmnroot_dev/bmnroot/build/macro/mpd_scheduler/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/alex/bmnroot_dev/bmnroot/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
