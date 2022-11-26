cmake_minimum_required (VERSION 3.10)

#PROJECT's NAME
project(g42cloud_cpp_sdk)

set(CMAKE_CXX_STANDARD 14)

include(GNUInstallDirs)

option(ENABLE_SHARED  "Enable shared library" ON)
option(ENABLE_RTTR  "Enable rttr library" OFF)

if(ENABLE_SHARED)
    set(LIB_TYPE SHARED)
    add_definitions(-DG42CLOUD_SHARED)
else()
    set(LIB_TYPE STATIC)
endif()

SET(BUILD_SERVICE ecs)
SET(SERVICE_VERSION v2)

if(BUILD_SERVICE STREQUAL "all" OR BUILD_SERVICE STREQUAL "")
   # USE MULTIPLE SERVICES(EXAMPLE: USE VPC ECS EVS)
   add_subdirectory(core)
   add_subdirectory(vpc/src/v2)
   add_subdirectory(ecs/src/v2)
   add_subdirectory(evs/src/v2)
   message(STATUS "Build all Services")
else()
   # USE SINGLE SERVICE(EXAMPLE: USE ECS)
   add_subdirectory(core)
   add_subdirectory(${BUILD_SERVICE}/src/${SERVICE_VERSION})
   message(STATUS   "'BUILD_SERVICE'=${BUILD_SERVICE}")
endif()

