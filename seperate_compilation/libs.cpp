#define BOOST_BEAST_SEPARATE_COMPILATION 1
#define BOOST_ASIO_SEPARATE_COMPILATION 1

#include <boost/asio/impl/src.hpp>
// this only works if openssl is available.
//#include <boost/asio/ssl/impl/src.hpp>
#include <boost/beast/src.hpp>
#include <boost/json/src.hpp>