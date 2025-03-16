cmake_minimum_required(VERSION 3.29)
project(beatlogs VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# -----------------------------
# Include directories (for header files)
# -----------------------------
# This adds the include directory to the list of directories to be searched for header files
# tells CMake to look for header files in the include directory when resolving #include statements.
# this way we can simplify includes and avoid paths
include_directories(include)


# -----------------------------
# Fetch and include CLI11 library
# -----------------------------
# Include FetchContent to download external dependencies
include(FetchContent)

# Declare CLI11 as an external dependency (it will be downloaded from GitHub)
FetchContent_Declare(
        CLI11
        GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git  # CLI11 GitHub repository URL
        GIT_TAG v2.3.2  # CLI11 version to fetch (you can update this to the latest version)
)

# Make CLI11 available for this project
FetchContent_MakeAvailable(CLI11)


# -----------------------------
# Define source files for the project
# -----------------------------
# GLOB: Automatically finds all source files in the src/ directory
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

# -----------------------------
# Optional: Specify include directories for the target (here for CLI11)
# -----------------------------
target_include_directories(beatlogs PRIVATE include)

# Link CLI11 library to the 'beatlogs' executable
# This ensures CLI11 functions are available in the final executable
target_link_libraries(beatlogs PRIVATE CLI11::CLI11)
