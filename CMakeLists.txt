cmake_minimum_required(VERSION 3.10)
project(PilasYColas)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(headers)

set(SOURCES
    main.cpp
    src/push_pila.cpp
    src/pop_pila.cpp
    src/top_pila.cpp
    src/size_pila.cpp
    src/empty_pila.cpp
    src/show_pila.cpp
    src/enqueue.cpp
    src/dequeue.cpp
    src/front_cola.cpp
    src/size_cola.cpp
    src/empty_cola.cpp
    src/show_cola.cpp
)

add_executable(PilasYColas ${SOURCES})

if(MSVC)
    target_compile_options(PilasYColas PRIVATE /W4)
else()
    target_compile_options(PilasYColas PRIVATE -Wall -Wextra)
endif()
