#if BOOST_BEAST_SEPARATE_COMPILATION
#include <boost/beast/src.hpp>
#endif

#if BOOST_ASIO_SEPARATE_COMPILATION
#include <boost/asio/impl/src.hpp>
#if BOOST_ASIO_USE_OPENSSL
// this only works if openssl is available.
#include <boost/asio/ssl/impl/src.hpp>
#endif
#endif

#include <boost/json/src.hpp>
