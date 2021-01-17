cmake_minimum_required(VERSION 3.10)
project(wxEditor)

set(APPNAME "\"wxEditor\"")
set(VERSION "\"0.1.0\"")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W -Wall -march=native")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=address,undefined")
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "-s")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG}")

if(CMAKE_BUILD_TYPE MATCHES Release OR NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/build/release")
  message("-- Release build")
elseif(CMAKE_BUILD_TYPE MATCHES Debug)
  set(CMAKE_BUILD_TYPE Debug)
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/build/debug")
  message("-- Debug build")
endif()

configure_file(
  "${CMAKE_SOURCE_DIR}/include/config.h.in"
  "${CMAKE_SOURCE_DIR}/include/config.h"
  )

include_directories("${CMAKE_SOURCE_DIR}/include")

set(SRC main.cpp gui.cpp MainFrame.cpp SettingsDialog.cpp About.cpp Resources.cpp)

set(wxWidgets_CONFIG_OPTIONS ${wxWidgets_CONFIG_OPTIONS} "--toolkit=gtk3")

find_package(wxWidgets COMPONENTS std stc REQUIRED)

add_executable(${PROJECT_NAME} ${SRC})

if(wxWidgets_FOUND)
  include(${wxWidgets_USE_FILE})
  target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
else()
  message(FATAL_ERROR "Failed to find WxWidgets library")
endif()

file(COPY "${CMAKE_SOURCE_DIR}/resources"
  DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
