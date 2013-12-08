
cmake_minimum_required(VERSION 2.8)

project (SimpleSamples)

aux_source_directory (./src SOURCES)
add_executable(SimpleSamples ${SOURCES})
