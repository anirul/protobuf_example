# OSX
# cmake .. -DCMAKE_TOOLCHAIN_FILE="../../vcpkg/scripts/buildsystems/vcpkg.cmake" -G Xcode
# Windows
# cmake .. -DCMAKE_TOOLCHAIN_FILE="$env:VCPKG_ROOT\scripts\buildsystems\vcpkg.cmake" -DVCPKG_TARGET_TRIPLET=x64-windows
cmake_minimum_required(VERSION 3.14)

project(protobuf_example)

if(WIN32)
	add_compile_options("/std:c++latest")
	add_compile_options("/D _WIN32_WINNT=0x0601")
endif(WIN32)
set(CMAKE_CXX_STANDARD 17)

include_directories(${Protobuf_INCLUDE_DIRS})

find_package(protobuf CONFIG REQUIRED)

add_library(proto
	${PROJECT_SOURCE_DIR}/protobuf/store.pb.cc
	${PROJECT_SOURCE_DIR}/protobuf/store.pb.h
)

target_link_libraries(proto
  PRIVATE
	protobuf::libprotobuf
)

add_executable(server
	${PROJECT_SOURCE_DIR}/example/main.cpp
)

target_link_libraries(server
  PRIVATE
	proto
	protobuf::libprotobuf
)

