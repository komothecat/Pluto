#include "netStatus.hpp"

namespace soup
{
    const char* netStatusToString(netStatus status)
    {
		if (status != NET_PENDING)
		{
			switch (status)
			{
			case NET_OK: return "OK";
			case NET_FAIL_NO_DNS_RESULTS: return "DNS Query Yielded No Results";
			case NET_FAIL_L4_TIMEOUT: return "TCP Handshake Timed Out";
			case NET_FAIL_L4_ERROR: return "TCP Handshake Failed";
			case NET_FAIL_L7_TIMEOUT: return "Request Timed Out";
			}
		}
		return "Pending";
    }
}
