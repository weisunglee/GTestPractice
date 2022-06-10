project(src)

set(HEADER_FILES
        Calculator.h
        StringProducer.h
        )

set(SOURCE_FILES
        Calculator.cpp
        StringProducer.cpp)

add_library(src
        ${HEADER_FILES}
        ${SOURCE_FILES})