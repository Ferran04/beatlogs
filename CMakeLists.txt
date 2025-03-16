cmake_minimum_required(VERSION 3.29)
project(beatlogs)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# This adds the include directory to the list of directories to be searched for header files
# tells CMake to look for header files in the include directory when resolving #include statements.
# this way we can simplify includes and avoid paths
include_directories(include)

# Define source files. GLOB: Automatically finds all source files
file(GLOB SOURCES "src/*.cpp")

# Create executable
add_executable(beatlogs
        src/main.cpp
        src/Song.cpp
        src/Album.cpp
        src/SongContainer.cpp
        src/Folder.cpp
        src/Playlist.cpp
        src/EP.cpp
        src/MediaItem.cpp
        include/MediaItem.h
        src/MusicRelease.cpp
        include/MusicRelease.h
        src/LibraryTree.cpp
        include/LibraryTree.h
)

# Optional: Specify include directories for the target
target_include_directories(beatlogs PRIVATE include)
