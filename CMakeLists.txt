project(VolumeVR)
cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(submodules/cef-cmake/cmake/cef_cmake.cmake)

add_executable(VolumeVR 
"src/gui/internal/WebApp.cpp"
"src/gui/Gui.cpp"
)
add_subdirectory(submodules/cef-cmake)
target_link_libraries(VolumeVR cefdll_wrapper)