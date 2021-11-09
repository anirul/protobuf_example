# OSX
# cmake .. -DCMAKE_TOOLCHAIN_FILE="../../vcpkg/scripts/buildsystems/vcpkg.cmake" -G Xcode
# Windows
# cmake .. -DCMAKE_TOOLCHAIN_FILE="$env:VCPKG_ROOT\scripts\buildsystems\vcpkg.cmake" -DVCPKG_TARGET_TRIPLET=x64-windows
cmake_minimum_required(VERSION 3.14)

project(protobuf-example)

if(WIN32)
	add_compile_options("/std:c++latest")
	add_compile_options("/D _WIN32_WINNT=0x0601")
endif(WIN32)
set(CMAKE_CXX_STANDARD 17)

find_package(protobuf CONFIG REQUIRED)

add_library(proto
	protobuf/store.proto
)

protobuf_generate(APPEND_PATH TARGET proto)

target_link_libraries(proto
  PRIVATE
	protobuf::libprotobuf
)

include_directories(${CMAKE_BINARY_DIR})

add_executable(server
	example/main.cpp
)

target_link_libraries(server
  PRIVATE
	proto
	protobuf::libprotobuf
)

