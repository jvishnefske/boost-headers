//
// Created by John Vishnefske on 7/29/2022.
//

#ifndef BOOST_HEADERS_SEPARATE_COMPILATION_BOOST_FWD_H_
#define BOOST_HEADERS_SEPARATE_COMPILATION_BOOST_FWD_H_

// here is a list of some forward declarations.

#include <boost/accumulators/accumulators_fwd.hpp>
#include <boost/accumulators/numeric/functional_fwd.hpp>
#include <boost/accumulators/statistics_fwd.hpp>
#include <boost/any/fwd.hpp>
#include <boost/asio/basic_streambuf_fwd.hpp>
#include <boost/asio/buffered_read_stream_fwd.hpp>
#include <boost/asio/buffered_stream_fwd.hpp>
#include <boost/asio/buffered_write_stream_fwd.hpp>
#include <boost/asio/ts/netfwd.hpp>
#include <boost/beast/websocket/stream_fwd.hpp>
#include <boost/blank_fwd.hpp>
#include <boost/circular_buffer_fwd.hpp>
#include <boost/container/container_fwd.hpp>
#include <boost/container/scoped_allocator_fwd.hpp>
#include <boost/container/uses_allocator_fwd.hpp>
#include <boost/container_hash/hash_fwd.hpp>
#include <boost/dynamic_bitset_fwd.hpp>
#include <boost/flyweight/assoc_container_factory_fwd.hpp>
#include <boost/flyweight/flyweight_fwd.hpp>
#include <boost/flyweight/hashed_factory_fwd.hpp>
#include <boost/flyweight/intermodule_holder_fwd.hpp>
#include <boost/flyweight/key_value_fwd.hpp>
#include <boost/flyweight/no_locking_fwd.hpp>
#include <boost/flyweight/no_tracking_fwd.hpp>
#include <boost/flyweight/refcounted_fwd.hpp>
#include <boost/flyweight/set_factory_fwd.hpp>
#include <boost/flyweight/simple_locking_fwd.hpp>
#include <boost/flyweight/static_holder_fwd.hpp>
#include <boost/foreach_fwd.hpp>
#include <boost/format/format_fwd.hpp>
#include <boost/format/internals_fwd.hpp>
#include <boost/function/function_fwd.hpp>
#include <boost/functional/hash/hash_fwd.hpp>
#include <boost/functional/hash_fwd.hpp>
#include <boost/fusion/algorithm/iteration/accumulate_fwd.hpp>
#include <boost/fusion/algorithm/iteration/fold_fwd.hpp>
#include <boost/fusion/algorithm/iteration/for_each_fwd.hpp>
#include <boost/fusion/algorithm/iteration/iter_fold_fwd.hpp>
#include <boost/fusion/algorithm/iteration/reverse_fold_fwd.hpp>
#include <boost/fusion/algorithm/iteration/reverse_iter_fold_fwd.hpp>
#include <boost/fusion/algorithm/query/find_fwd.hpp>
#include <boost/fusion/algorithm/query/find_if_fwd.hpp>
#include <boost/fusion/container/deque/deque_fwd.hpp>
#include <boost/fusion/container/list/cons_fwd.hpp>
#include <boost/fusion/container/list/list_fwd.hpp>
#include <boost/fusion/container/map/map_fwd.hpp>
#include <boost/fusion/container/set/set_fwd.hpp>
#include <boost/fusion/container/vector/vector_fwd.hpp>
#include <boost/fusion/include/deque_fwd.hpp>
#include <boost/fusion/include/list_fwd.hpp>
#include <boost/fusion/include/map_fwd.hpp>
#include <boost/fusion/include/set_fwd.hpp>
#include <boost/fusion/include/tag_of_fwd.hpp>
#include <boost/fusion/include/tuple_fwd.hpp>
#include <boost/fusion/include/vector_fwd.hpp>
#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/support/tag_of_fwd.hpp>
#include <boost/fusion/tuple/tuple_fwd.hpp>
#include <boost/fusion/view/joint_view/joint_view_fwd.hpp>
#include <boost/fusion/view/repetitive_view/repetitive_view_fwd.hpp>
#include <boost/fusion/view/transform_view/transform_view_fwd.hpp>
#include <boost/fusion/view/zip_view/zip_view_iterator_fwd.hpp>
#include <boost/gil/concepts/fwd.hpp>
#include <boost/histogram/fwd.hpp>
#include <boost/integer_fwd.hpp>
#include <boost/interprocess/containers/containers_fwd.hpp>
#include <boost/interprocess/interprocess_fwd.hpp>
#include <boost/intrusive/intrusive_fwd.hpp>
#include <boost/io_fwd.hpp>
#include <boost/iostreams/operations_fwd.hpp>
#include <boost/iostreams/traits_fwd.hpp>
#include <boost/json/fwd.hpp>
#include <boost/log/attributes/fallback_policy_fwd.hpp>
#include <boost/log/attributes/value_extraction_fwd.hpp>
#include <boost/log/attributes/value_visitation_fwd.hpp>
#include <boost/log/expressions/attr_fwd.hpp>
#include <boost/log/expressions/keyword_fwd.hpp>
#include <boost/log/utility/formatting_ostream_fwd.hpp>
#include <boost/log/utility/string_literal_fwd.hpp>
#include <boost/log/utility/value_ref_fwd.hpp>
#include <boost/logic/tribool_fwd.hpp>
#include <boost/math/distributions/fwd.hpp>
#include <boost/math/special_functions/math_fwd.hpp>
#include <boost/math_fwd.hpp>
//#include <boost/mpi/collectives_fwd.hpp>
//#include <boost/mpi/datatype_fwd.hpp>
//#include <boost/mpi/skeleton_and_content_fwd.hpp>
#include <boost/mpl/advance_fwd.hpp>
#include <boost/mpl/apply_fwd.hpp>
#include <boost/mpl/arg_fwd.hpp>
#include <boost/mpl/at_fwd.hpp>
#include <boost/mpl/aux_/na_fwd.hpp>
#include <boost/phoenix/core/terminal_fwd.hpp>
#include <boost/poly_collection/any_collection_fwd.hpp>
#include <boost/poly_collection/base_collection_fwd.hpp>
#include <boost/poly_collection/function_collection_fwd.hpp>
#include <boost/pool/poolfwd.hpp>
#include <boost/property_tree/ptree_fwd.hpp>
#include <boost/proto/proto_fwd.hpp>
// seems to want python headers avaliable.
//#include <boost/python/args_fwd.hpp>
//#include <boost/python/class_fwd.hpp>
//#include <boost/python/handle_fwd.hpp>
//#include <boost/python/object/value_holder_fwd.hpp>
//#include <boost/python/object_fwd.hpp>
#include <boost/range/adaptor/argument_fwd.hpp>
#include <boost/range/range_fwd.hpp>
#include <boost/ratio/ratio_fwd.hpp>
#include <boost/regex/v4/regex_fwd.hpp>
#include <boost/regex/v5/regex_fwd.hpp>
#include <boost/regex_fwd.hpp>
#include <boost/serialization/void_cast_fwd.hpp>
#include <boost/spirit/home/classic/attribute/closure_fwd.hpp>
#include <boost/spirit/home/classic/core/non_terminal/subrule_fwd.hpp>
#include <boost/spirit/home/classic/core/primitives/numerics_fwd.hpp>
#include <boost/spirit/home/classic/core/scanner/scanner_fwd.hpp>
#include <boost/spirit/home/classic/core/scanner/skipper_fwd.hpp>
#include <boost/spirit/home/classic/dynamic/stored_rule_fwd.hpp>
#include <boost/spirit/home/classic/error_handling/exceptions_fwd.hpp>
#include <boost/spirit/home/classic/iterator/file_iterator_fwd.hpp>
#include <boost/spirit/home/classic/iterator/multi_pass_fwd.hpp>
#include <boost/spirit/home/classic/iterator/position_iterator_fwd.hpp>
#include <boost/spirit/home/classic/symbols/symbols_fwd.hpp>
#include <boost/spirit/home/classic/tree/ast_fwd.hpp>
#include <boost/spirit/home/classic/tree/common_fwd.hpp>
#include <boost/spirit/home/classic/tree/parse_tree_fwd.hpp>
#include <boost/spirit/home/classic/utility/confix_fwd.hpp>
#include <boost/spirit/home/classic/utility/distinct_fwd.hpp>
#include <boost/spirit/home/classic/utility/escape_char_fwd.hpp>
#include <boost/spirit/home/classic/utility/grammar_def_fwd.hpp>
#include <boost/spirit/home/classic/utility/lists_fwd.hpp>
#include <boost/spirit/home/karma/nonterminal/nonterminal_fwd.hpp>
#include <boost/spirit/home/qi/nonterminal/nonterminal_fwd.hpp>
#include <boost/spirit/home/support/attributes_fwd.hpp>
#include <boost/spirit/home/support/iterators/multi_pass_fwd.hpp>
#include <boost/spirit/home/support/utree/utree_traits_fwd.hpp>
#include <boost/spirit/include/classic_ast_fwd.hpp>
#include <boost/spirit/include/classic_closure_fwd.hpp          >
#include <boost/spirit/include/classic_common_fwd.hpp           >
#include <boost/spirit/include/classic_confix_fwd.hpp           >
#include <boost/spirit/include/classic_distinct_fwd.hpp         >
#include <boost/spirit/include/classic_escape_char_fwd.hpp      >
#include <boost/spirit/include/classic_exceptions_fwd.hpp       >
#include <boost/spirit/include/classic_file_iterator_fwd.hpp    >
#include <boost/spirit/include/classic_grammar_def_fwd.hpp  >
#include <boost/spirit/include/classic_lists_fwd.hpp            >
#include <boost/spirit/include/classic_multi_pass_fwd.hpp       >
#include <boost/spirit/include/classic_numerics_fwd.hpp         >
#include <boost/spirit/include/classic_parse_tree_fwd.hpp       >
#include <boost/spirit/include/classic_position_iterator_fwd.hpp>
#include <boost/spirit/include/classic_scanner_fwd.hpp          >
#include <boost/spirit/include/classic_skipper_fwd.hpp          >
#include <boost/spirit/include/classic_stored_rule_fwd.hpp      >
#include <boost/spirit/include/classic_subrule_fwd.hpp          >
#include <boost/spirit/include/classic_symbols_fwd.hpp          >
#include <boost/spirit/include/support_attributes_fwd.hpp       >
#include <boost/spirit/include/support_multi_pass_fwd.hpp       >
#include <boost/stacktrace/stacktrace_fwd.hpp>
#include <boost/stl_interfaces/fwd.hpp>
#include <boost/test/data/monomorphic/fwd.hpp>
#include <boost/test/utils/basic_cstring/basic_cstring_fwd.hpp>
#include <boost/test/utils/runtime/fwd.hpp>
// not applicable on windows, and not likely to be useful in header only.
//#include <boost/thread/pthread/condition_variable_fwd.hpp>
#include <boost/units/units_fwd.hpp>
#include <boost/unordered/unordered_map_fwd.hpp>
#include <boost/unordered/unordered_set_fwd.hpp>
#include <boost/utility/string_ref_fwd.hpp>
#include <boost/utility/string_view_fwd.hpp>
#include <boost/variant/recursive_wrapper_fwd.hpp>
#include <boost/variant/variant_fwd.hpp>
#include <boost/xpressive/xpressive_fwd.hpp>
#include <boost/yap/algorithm_fwd.hpp>

#endif  // MIDDLEWARE_THIRD_PARTY_BOOST_HEADERS_SEPARATE_COMPILATION_BOOST_FWD_H_
