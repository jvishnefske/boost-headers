project('boost-headers', ['cpp'], version: '1.78', meson_version: '>=0.54.0')
boost_dep = declare_dependency(include_directories: include_directories('include'))
meson.override_dependency('boost', boost_dep)
boost_test_main = library('boost_test_main', './separate_compilation/boost_test_main.cpp',
  dependencies: boost_dep, install: true, build_by_default: false)
boost_test_main_dep = declare_dependency(link_with: boost_test_main, dependencies: boost_dep)
