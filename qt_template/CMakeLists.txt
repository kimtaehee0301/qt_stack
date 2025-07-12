cmake_minimum_required(VERSION 3.5)

# Project name
project(qt_template VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Try to find Qt6 first, if not found, try Qt5
find_package(Qt6 COMPONENTS Widgets QUIET)
if(Qt6_FOUND)
    set(QT_VERSION_MAJOR 6)
    message(STATUS "Found Qt6: ${Qt6_VERSION}")
else()
    find_package(Qt5 COMPONENTS Widgets REQUIRED)
    set(QT_VERSION_MAJOR 5)
    message(STATUS "Found Qt5: ${Qt5_VERSION}")
endif()

if(NOT Qt5_FOUND AND NOT Qt6_FOUND)
    message(FATAL_ERROR "Qt5 or Qt6 not found. Please install Qt.")
endif()

# AUTO 기능 활성화
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# UI 파일 경로 설정
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/ui)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Source files
set(SOURCES
    src/main.cpp
    src/mainwindow.cpp
)

# Header files
set(HEADERS
    include/mainwindow.h
)

# UI files
set(UI_FILES
    ui/mainwindow.ui
)

# Resource files
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/resources/resources.qrc)
    set(RESOURCE_FILES resources/resources.qrc)
endif()

# Add the executable
add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${UI_FILES}
    ${RESOURCE_FILES}
)

# Link the appropriate Qt Widgets library
if(QT_VERSION_MAJOR EQUAL 6)
    target_link_libraries(${PROJECT_NAME} Qt6::Widgets)
else()
    target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
endif()

# Include
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_BINARY_DIR}
)

# Platform-specific settings
if(WIN32)
    # Windows-specific settings (if any)
elseif(UNIX)
    # Linux-specific settings (if any)
endif()
