include_directories(${PROJECT_SOURCE_DIR}/src/mock)

add_executable(runMockTests TestUnoRandomDrive.cpp)
target_link_libraries(runMockTests ${GTEST_LIBRARIES}
        ${PROJECT_SOURCE_DIR}/src/mock/UnoRandomDrive.cpp
        )

