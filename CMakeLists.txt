cmake_minimum_required(VERSION 3.5)
project(pixel-art-gen)

# set standard:
set(CMAKE_CXX_STANDARD 20)

# compiler flags:
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

# source files
set(SOURCES
  src/main.cpp
)

# headers
set(HEADERS
)

# add executable
add_executable(pixel-art-gen ${SOURCES} ${HEADERS})

# link libs
#target_link_libraries(pixel-art-gen ${SDL2_LIBRARIES})

# Specify the output directory for the binary
set_target_properties(pixel-art-gen PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# command to run in root dir:
add_custom_target(run
	COMMAND pixel-art-gen
	DEPENDS pixel-art-gen
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
	COMMENT "Running pixel-art-gen program"
)



