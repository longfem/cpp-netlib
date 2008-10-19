
//          Copyright Dean Michael Berris 2008.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_NETWORK_PROTOCOL_HTTP_PARSER_TRAITS_RESOURCE_IPP
#define BOOST_NETWORK_PROTOCOL_HTTP_PARSER_TRAITS_RESOURCE_IPP

#include <boost/network/protocol/http/tags.hpp>

namespace boost { namespace network { namespace http {

    template <>
        struct resource<http::message_tag> {
            static boost::uint32_t const MAX = 1024u * 256u;
        };

} // namespace http

} // namespace network

} // namespace boost

#endif // BOOST_NETWORK_PROTOCOL_HTTP_PARSER_TRAITS_RESOURCE_IPP
