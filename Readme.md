Boost Headers
================================================

This is intended to be used as a submodule to provide boost header with the 
Boost::boost cmake target. It may be helpful for projects which use header-only features of the Boost library.

Note that this is currently the header folder from the boost source release, and it includes features which have a (missing) link time component.
It is not always what features are available as header-only at compile time, and link time problems may occur if specific features of libraries are used.

