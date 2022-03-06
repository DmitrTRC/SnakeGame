set(BINARY ${CMAKE_PROJECT_NAME})


file(GLOB_RECURSE run_SOURCES LIST_DIRECTORIES true *.h *.cpp)


set(SOURCES ${run_SOURCES})

add_executable(${BINARY} ${run_SOURCES})

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

if (NOT SFML_FOUND)
    message(FATAL_ERROR "SFML module NOT FOUND! ")
endif ()

message(STATUS "SFML modules OK.")

include_directories(${SFML_INCLUDE_DIR})

target_link_libraries(${BINARY} sfml-system sfml-window sfml-graphics sfml-audio sfml-network)




