cmake_minimum_required(VERSION 3.21)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)
set(PROJECT_NAME poc_arrow_c)

set(PROJECT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_PATH}/build/bin)

project(${PROJECT_NAME} LANGUAGES C)

find_package(GLIB REQUIRED)
message(STATUS "GLIB_INCLUDE_DIRS: ${GLIB_INCLUDE_DIRS}")

find_package(Arrow REQUIRED)
if(${Arrow_FOUND})
  message(STATUS "Arrow Found: yes")
  message(STATUS "Arrow Version: ${ARROW_VERSION}")
endif()

include_directories(${GLIB_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} src/pocarrow.c)
target_link_libraries(${PROJECT_NAME} PRIVATE arrow_shared ${GLIB_LIBRARIES})
