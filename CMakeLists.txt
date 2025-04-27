cmake_minimum_required( VERSION 3.31.4 )
project( basic_dsa_implementations )

set( CMAKE_CXX_STANDARD 20 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

include( FetchContent )

FetchContent_Declare(
    googletest
    GIT_REPOSITORY  https://github.com/google/googletest.git
    GIT_TAG         v1.16.x
)
    
set( gtest_force_shared_crt ON CACHE BOOL "" FORCE )

FetchContent_MakeAvailable( googletest )

enable_testing()

add_executable( main main.cpp )

find_package( GTest REQUIRED )

add_executable( run_tests basic_tests.cpp )
target_link_libraries( run_tests PRIVATE GTest::GTest GTest::Main )

include( GoogleTest )
gtest_discover_tests( run_tests )