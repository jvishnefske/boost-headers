project(boost_headers)
cmake_minimum_required(VERSION 3.5)
add_library(boost INTERFACE)
add_library(Boost::boost ALIAS boost)
target_include_directories(boost INTERFACE include)
# note that we are not curretly defining BOOST_ALL_NO_LIB by default.
# it may be useful to get the library name which failed to link rather than
# a sometimes large list of function template instanciations.