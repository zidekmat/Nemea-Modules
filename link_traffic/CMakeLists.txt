cmake_minimum_required(VERSION 3.8)
set (CMAKE_C_STANDARD 11)

project(link_traffic)

include_directories(../)

add_definitions(-DHAVE_CONFIG_H=1)

set(SOURCE_FILES link_traffic.c fields.c)

add_executable(link_traffic ${SOURCE_FILES})
target_link_libraries(link_traffic unirec trap pthread sysrepo)

