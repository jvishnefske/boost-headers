project(boost_headers CXX)
cmake_minimum_required(VERSION 3.5)
add_library(boost INTERFACE)
add_library(Boost::boost ALIAS boost)
target_include_directories(boost INTERFACE include)
# note that we are not currently defining BOOST_ALL_NO_LIB by default.
# it may be useful to get the library name which failed to link rather than
# a sometimes large list of function template instantiations.
include(function.cmake)

add_boost_impl(json ${CMAKE_CURRENT_SOURCE_DIR}/separate_compilation/libs.cpp)
target_compile_definitions(json PUBLIC BOOST_JSON_NO_LIB BOOST_ASIO_NO_LIB BOOST_ASIO_NO_LIB BOOST_CONTAINER_NO_LIB)
# this is added for convince to include the boost main function as a cmake target library.
add_boost_impl(test_main separate_compilation/boost_test_main.cpp)
