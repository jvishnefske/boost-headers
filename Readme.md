Boost Headers
================================================

A header dump from Boost releases intended for use as a submodule to provide boost headers with the
Boost::boost cmake target. It may be helpful for projects which use header-only features of the Boost library.

Why header only?
----------------
Using a library as header-only has both advantages and disadvantages in terms of developer experience and
project maintainability. One aspect is that it simplifies the build environment and allows the project to be used
in environments without being tied to target specific packages or environments. Configuring and (re)compiling the entire Boost library
for a new target can take several minutes or more. This time is unnecessary if only the header-only features are needed. Header only may also simplify supporting various
Continuous Integration platforms.

Who should not use this repo?
-----------------------------

Most boost libraries are header-only and will work from this repository. Since
the include/ header folder structure is not currently modified from the boost source release, there are some libraries
which require separate compilation of the source code which is not contained in this repository. If you need any
of these, this repository likely will not be useful for you.

 - Boost.Chrono
 - Boost.Context
 - Boost.Filesystem
 - Boost.GraphParallel
 - Boost.IOStreams
 - Boost.Locale
 - Boost.Log (see build documentation)
 - Boost.MPI
 - Boost.ProgramOptions
 - Boost.Python (see the Boost.Python build documentation before building and installing it)
 - Boost.Regex
 - Boost.Serialization
 - Boost.Thread
 - Boost.Timer
 - Boost.Wave

Other libraries have optional compile time components which are not buildable from this repository. Link time problems may occur if specific features of libraries are used.

