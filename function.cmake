# there are some libraries for which the source is contained in the header folder.
macro(add_boost_impl basename filelist)
    message(STATUS "added boost ${basename} ")
    add_library(${basename} ${filelist})
    set_target_properties(${basename} PROPERTIES LINKER_LANGUAGE CXX)
    target_link_libraries(${basename} PUBLIC Boost::boost)
    add_library(Boost::${basename} ALIAS ${basename})
    target_compile_features(${basename} PRIVATE cxx_std_14)
endmacro()
