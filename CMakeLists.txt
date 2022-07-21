project(boost_headers CXX)
cmake_minimum_required(VERSION 3.5)
add_library(boost INTERFACE)
add_library(Boost::boost ALIAS boost)
target_include_directories(boost INTERFACE include)
# note that we are not curretly defining BOOST_ALL_NO_LIB by default.
# it may be useful to get the library name which failed to link rather than
# a sometimes large list of function template instanciations.

# there are some libraries for which the source is contined in the header folder.
macro(add_boost_impl basename filelist)
    add_library(${basename} ${filelist})
    set_target_properties(${basename} PROPERTIES LINKER_LANGUAGE CXX)
    target_link_libraries(${basename} PUBLIC Boost::boost)
    add_library(Boost::${basename} ALIAS ${basename})
endmacro()

add_boost_impl(boostlibs ${CMAKE_CURRENT_SOURCE_DIR}/seperate_compilation/libs.cpp)
target_compile_definitions(boostlibs PUBLIC BOOST_JSON_NO_LIB BOOST_ASIO_NO_LIB BOOST_ASIO_NO_LIB BOOST_CONTAINER_NO_LIB)
# this is added for convinince to include the boost main function as a cmake target library.
add_boost_impl(test_main seperate_compilation/boost_test_main.cpp)
