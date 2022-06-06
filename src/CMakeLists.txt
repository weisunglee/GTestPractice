project(src)

set(HEADER_FILES
        Calculator.h
        )

set(SOURCE_FILES
        Calculator.cpp
        )

add_library(src
        ${HEADER_FILES}
        ${SOURCE_FILES})