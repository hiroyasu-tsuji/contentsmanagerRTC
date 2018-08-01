# contentsmanager CMake config file
#
# This file sets the following variables:
# contentsmanager_FOUND - Always TRUE.
# contentsmanager_INCLUDE_DIRS - Directories containing the contentsmanager include files.
# contentsmanager_IDL_DIRS - Directories containing the contentsmanager IDL files.
# contentsmanager_LIBRARIES - Libraries needed to use contentsmanager.
# contentsmanager_DEFINITIONS - Compiler flags for contentsmanager.
# contentsmanager_VERSION - The version of contentsmanager found.
# contentsmanager_VERSION_MAJOR - The major version of contentsmanager found.
# contentsmanager_VERSION_MINOR - The minor version of contentsmanager found.
# contentsmanager_VERSION_REVISION - The revision version of contentsmanager found.
# contentsmanager_VERSION_CANDIDATE - The candidate version of contentsmanager found.

message(STATUS "Found contentsmanager-1.0.0")
set(contentsmanager_FOUND TRUE)

find_package(<dependency> REQUIRED)

#set(contentsmanager_INCLUDE_DIRS
#    "/usr/local/include/contentsmanager-1"
#    ${<dependency>_INCLUDE_DIRS}
#    )
#
#set(contentsmanager_IDL_DIRS
#    "/usr/local/include/contentsmanager-1/idl")
set(contentsmanager_INCLUDE_DIRS
    "/usr/local/include/"
    ${<dependency>_INCLUDE_DIRS}
    )
set(contentsmanager_IDL_DIRS
    "/usr/local/include//idl")


if(WIN32)
    set(contentsmanager_LIBRARIES
        "/usr/local//libcontentsmanager.a"
        ${<dependency>_LIBRARIES}
        )
else(WIN32)
    set(contentsmanager_LIBRARIES
        "/usr/local//libcontentsmanager.so"
        ${<dependency>_LIBRARIES}
        )
endif(WIN32)

set(contentsmanager_DEFINITIONS ${<dependency>_DEFINITIONS})

set(contentsmanager_VERSION 1.0.0)
set(contentsmanager_VERSION_MAJOR 1)
set(contentsmanager_VERSION_MINOR 0)
set(contentsmanager_VERSION_REVISION 0)
set(contentsmanager_VERSION_CANDIDATE )

