cmake_minimum_required(VERSION 3.26)
project(untitled1)

# Set the path to GMP library
set(GMP_INCLUDE_DIR "/opt/homebrew/Cellar/gmp/6.3.0/include")
set(GMP_LIBRARY_DIR "/opt/homebrew/Cellar/gmp/6.3.0/lib") # Update this path if necessary

# Add your executable
add_executable(untitled1 main.cpp)

# Include directories for GMP and other libraries
include_directories(untitled1 "${GMP_INCLUDE_DIR}")
include_directories(untitled1 "/opt/homebrew/Cellar/pbc/0.5.14/include")

# Link libraries
target_link_libraries(untitled1 "${GMP_LIBRARY_DIR}/libgmp.a") # Assuming libgmp.a exists at this location
target_link_libraries(untitled1 pbc pbc)
