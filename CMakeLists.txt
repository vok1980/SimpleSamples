
cmake_minimum_required(VERSION 2.8)

project (SimpleSamples)

aux_source_directory (./src 		SOURCES)
aux_source_directory (./src/sqlite	SOURCES_SQLITE )

add_executable(SimpleSamples ${SOURCES} ${SOURCES_SQLITE})
