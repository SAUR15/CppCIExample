include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_math
    test_math.cpp
)

target_link_libraries(test_math
    gtest_main
    math_utils
)

include(GoogleTest)
gtest_discover_tests(test_math)
