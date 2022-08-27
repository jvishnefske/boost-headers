//
// Created by John Vishnefske on 7/29/2022.
//

#ifndef THIRD_PARTY_BOOST_HEADERS_SEPARATE_COMPILATION_EXAMPLE_HPP_
#define THIRD_PARTY_BOOST_HEADERS_SEPARATE_COMPILATION_EXAMPLE_HPP_

/**
 * this is a non exhaustive list of headers which may be included from this repo
 * it includes convienince headers with some that create warnings commented out.
 */

#include <boost/align.hpp>
#include <boost/aligned_storage.hpp>
#include <boost/any.hpp>
#include <boost/array.hpp>
#include <boost/asio.hpp>
#include <boost/assert.hpp>
#include <boost/assign.hpp>
#include <boost/atomic.hpp>
#include <boost/beast.hpp>
#include <boost/bimap.hpp>
#include <boost/bind/bind.hpp>
#include <boost/blank.hpp>
#include <boost/blank_fwd.hpp>
#include <boost/call_traits.hpp>
#include <boost/callable_traits.hpp>
#include <boost/cast.hpp>
#include <boost/cerrno.hpp>
#include <boost/checked_delete.hpp>
//#include <boost/chrono.hpp>
#include <boost/circular_buffer.hpp>
#include <boost/circular_buffer_fwd.hpp>
#include <boost/compressed_pair.hpp>
// compute requires openCL
//#include <boost/compute.hpp>
#include <boost/concept_archetype.hpp>
#include <boost/concept_check.hpp>
#include <boost/config.hpp>
#include <boost/contract.hpp>
#include <boost/contract_macro.hpp>
#include <boost/convert.hpp>
#include <boost/crc.hpp>
//#include <boost/cregex.hpp>
#include <boost/cstdfloat.hpp>
#include <boost/cstdint.hpp>
#include <boost/cstdlib.hpp>
#include <boost/current_function.hpp>
#include <boost/cxx11_char_types.hpp>
#include <boost/date_time.hpp>
#include <boost/describe.hpp>
#include <boost/dll.hpp>
#include <boost/dynamic_bitset.hpp>
#include <boost/dynamic_bitset_fwd.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/endian.hpp>
#include <boost/exception_ptr.hpp>
//#include <boost/filesystem.hpp>
#include <boost/flyweight.hpp>
#include <boost/foreach.hpp>
#include <boost/foreach_fwd.hpp>
#include <boost/format.hpp>
#include <boost/function.hpp>
#include <boost/function_equal.hpp>
#include <boost/iterator/function_output_iterator.hpp>
#include <boost/functional.hpp>
#include <boost/generator_iterator.hpp>
#include <boost/geometry.hpp>
#include <boost/get_pointer.hpp>
#include <boost/gil.hpp>
// Hana complains on msvc 19 parsed at least once from mingw gcc
//#include <boost/hana.hpp>
#include <boost/histogram.hpp>
#include <boost/hof.hpp>
#include <boost/implicit_cast.hpp>
#include <boost/indirect_reference.hpp>
#include <boost/integer.hpp>
#include <boost/integer_fwd.hpp>
#include <boost/integer_traits.hpp>
#include <boost/intrusive_ptr.hpp>
#include <boost/io_fwd.hpp>
#include <boost/is_placeholder.hpp>
#include <boost/iterator.hpp>
#include <boost/iterator_adaptors.hpp>
#include <boost/json.hpp>
#include <boost/lambda2.hpp>
#include <boost/leaf.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/limits.hpp>
#include <boost/local_function.hpp>
//creates warning about auto_ptr deprication may be an interaction with align.hpp, or others
//#include <boost/locale.hpp>
#include <boost/make_default.hpp>
#include <boost/make_shared.hpp>
#include <boost/make_unique.hpp>
#include <boost/math_fwd.hpp>
#include <boost/mem_fn.hpp>
#include <boost/memory_order.hpp>
#include <boost/metaparse.hpp>
#include <boost/mp11.hpp>
// requires mpi
//#include <boost/mpi.hpp>
#include <boost/multi_array.hpp>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index_container_fwd.hpp>
#include <boost/next_prior.hpp>
#include <boost/shared_container_iterator.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/signals2.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/spirit/include/classic.hpp>
// not working on macos
//#include <boost/stacktrace.hpp>
#include <boost/static_assert.hpp>
#include <boost/static_string.hpp>
#include <boost/swap.hpp>
#include <boost/system.hpp>
//#include <boost/thread.hpp>
#include <boost/throw_exception.hpp>
//#include <boost/timer/timer.hpp>
#include <boost/token_functions.hpp>
#include <boost/token_iterator.hpp>
#include <boost/tokenizer.hpp>
#include <boost/type.hpp>
#include <boost/type_index.hpp>
#include <boost/type_traits.hpp>
#include <boost/unordered_map.hpp>
#include <boost/unordered_set.hpp>
#include <boost/utility.hpp>
#include <boost/variant.hpp>
#include <boost/variant2.hpp>
#include <boost/version.hpp>
#include <boost/visit_each.hpp>
//#include <boost/wave.hpp>
#include <boost/weak_ptr.hpp>

#endif  // THIRD_PARTY_BOOST_HEADERS_SEPARATE_COMPILATION_EXAMPLE_HPP_
