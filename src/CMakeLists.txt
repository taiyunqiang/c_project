aux_source_directory(. SRC_LIST)
add_executable(helloworld ${SRC_LIST})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)