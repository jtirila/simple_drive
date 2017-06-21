find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS} ${SimpleDrive_SOURCE_DIR}/src)

add_executable(runTests test_simple_test.cpp  )
target_link_libraries(runTests ${GTEST_LIBRARIES}
        ${PROJECT_SOURCE_DIR}/src/simple_test.cpp
        )

add_subdirectory(mock)
