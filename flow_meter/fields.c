/************* THIS IS AUTOMATICALLY GENERATED FILE, DO NOT EDIT *************/
// Tables are indexed by field ID
#include "fields.h"

char *ur_field_names_static[] = {
   "DST_IP",
   "SRC_IP",
   "BYTES",
   "LINK_BIT_FIELD",
   "TIME",
   "TIME_FIRST",
   "TIME_LAST",
   "DNS_RR_TTL",
   "NTP_DELAY",
   "NTP_DISPERSION",
   "ODID",
   "PACKETS",
   "ARP_HA_FORMAT",
   "ARP_OPCODE",
   "ARP_PA_FORMAT",
   "DNS_ANSWERS",
   "DNS_CLASS",
   "DNS_ID",
   "DNS_PSIZE",
   "DNS_QTYPE",
   "DNS_RLENGTH",
   "DST_PORT",
   "ETHERTYPE",
   "HTTP_RESPONSE_CODE",
   "SIP_MSG_TYPE",
   "SIP_STATUS_CODE",
   "SRC_PORT",
   "DIR_BIT_FIELD",
   "DNS_DO",
   "DNS_RCODE",
   "NTP_LEAP",
   "NTP_MODE",
   "NTP_POLL",
   "NTP_PRECISION",
   "NTP_STRATUM",
   "NTP_VERSION",
   "PROTOCOL",
   "TCP_FLAGS",
   "TOS",
   "TTL",
   "ARP_DST_HA",
   "ARP_DST_PA",
   "ARP_SRC_HA",
   "ARP_SRC_PA",
   "DNS_NAME",
   "DNS_RDATA",
   "DST_MAC",
   "HTTP_CONTENT_TYPE",
   "HTTP_HOST",
   "HTTP_METHOD",
   "HTTP_REFERER",
   "HTTP_URL",
   "HTTP_USER_AGENT",
   "NTP_ORIG",
   "NTP_RECV",
   "NTP_REF",
   "NTP_REF_ID",
   "NTP_SENT",
   "SIP_CALLED_PARTY",
   "SIP_CALL_ID",
   "SIP_CALLING_PARTY",
   "SIP_CSEQ",
   "SIP_REQUEST_URI",
   "SIP_USER_AGENT",
   "SIP_VIA",
   "SRC_MAC",
};
short ur_field_sizes_static[] = {
   16, /* DST_IP */
   16, /* SRC_IP */
   8, /* BYTES */
   8, /* LINK_BIT_FIELD */
   8, /* TIME */
   8, /* TIME_FIRST */
   8, /* TIME_LAST */
   4, /* DNS_RR_TTL */
   4, /* NTP_DELAY */
   4, /* NTP_DISPERSION */
   4, /* ODID */
   4, /* PACKETS */
   2, /* ARP_HA_FORMAT */
   2, /* ARP_OPCODE */
   2, /* ARP_PA_FORMAT */
   2, /* DNS_ANSWERS */
   2, /* DNS_CLASS */
   2, /* DNS_ID */
   2, /* DNS_PSIZE */
   2, /* DNS_QTYPE */
   2, /* DNS_RLENGTH */
   2, /* DST_PORT */
   2, /* ETHERTYPE */
   2, /* HTTP_RESPONSE_CODE */
   2, /* SIP_MSG_TYPE */
   2, /* SIP_STATUS_CODE */
   2, /* SRC_PORT */
   1, /* DIR_BIT_FIELD */
   1, /* DNS_DO */
   1, /* DNS_RCODE */
   1, /* NTP_LEAP */
   1, /* NTP_MODE */
   1, /* NTP_POLL */
   1, /* NTP_PRECISION */
   1, /* NTP_STRATUM */
   1, /* NTP_VERSION */
   1, /* PROTOCOL */
   1, /* TCP_FLAGS */
   1, /* TOS */
   1, /* TTL */
   -1, /* ARP_DST_HA */
   -1, /* ARP_DST_PA */
   -1, /* ARP_SRC_HA */
   -1, /* ARP_SRC_PA */
   -1, /* DNS_NAME */
   -1, /* DNS_RDATA */
   -1, /* DST_MAC */
   -1, /* HTTP_CONTENT_TYPE */
   -1, /* HTTP_HOST */
   -1, /* HTTP_METHOD */
   -1, /* HTTP_REFERER */
   -1, /* HTTP_URL */
   -1, /* HTTP_USER_AGENT */
   -1, /* NTP_ORIG */
   -1, /* NTP_RECV */
   -1, /* NTP_REF */
   -1, /* NTP_REF_ID */
   -1, /* NTP_SENT */
   -1, /* SIP_CALLED_PARTY */
   -1, /* SIP_CALL_ID */
   -1, /* SIP_CALLING_PARTY */
   -1, /* SIP_CSEQ */
   -1, /* SIP_REQUEST_URI */
   -1, /* SIP_USER_AGENT */
   -1, /* SIP_VIA */
   -1, /* SRC_MAC */
};
ur_field_type_t ur_field_types_static[] = {
   UR_TYPE_IP, /* DST_IP */
   UR_TYPE_IP, /* SRC_IP */
   UR_TYPE_UINT64, /* BYTES */
   UR_TYPE_UINT64, /* LINK_BIT_FIELD */
   UR_TYPE_TIME, /* TIME */
   UR_TYPE_TIME, /* TIME_FIRST */
   UR_TYPE_TIME, /* TIME_LAST */
   UR_TYPE_UINT32, /* DNS_RR_TTL */
   UR_TYPE_UINT32, /* NTP_DELAY */
   UR_TYPE_UINT32, /* NTP_DISPERSION */
   UR_TYPE_UINT32, /* ODID */
   UR_TYPE_UINT32, /* PACKETS */
   UR_TYPE_UINT16, /* ARP_HA_FORMAT */
   UR_TYPE_UINT16, /* ARP_OPCODE */
   UR_TYPE_UINT16, /* ARP_PA_FORMAT */
   UR_TYPE_UINT16, /* DNS_ANSWERS */
   UR_TYPE_UINT16, /* DNS_CLASS */
   UR_TYPE_UINT16, /* DNS_ID */
   UR_TYPE_UINT16, /* DNS_PSIZE */
   UR_TYPE_UINT16, /* DNS_QTYPE */
   UR_TYPE_UINT16, /* DNS_RLENGTH */
   UR_TYPE_UINT16, /* DST_PORT */
   UR_TYPE_UINT16, /* ETHERTYPE */
   UR_TYPE_UINT16, /* HTTP_RESPONSE_CODE */
   UR_TYPE_UINT16, /* SIP_MSG_TYPE */
   UR_TYPE_UINT16, /* SIP_STATUS_CODE */
   UR_TYPE_UINT16, /* SRC_PORT */
   UR_TYPE_UINT8, /* DIR_BIT_FIELD */
   UR_TYPE_UINT8, /* DNS_DO */
   UR_TYPE_UINT8, /* DNS_RCODE */
   UR_TYPE_UINT8, /* NTP_LEAP */
   UR_TYPE_UINT8, /* NTP_MODE */
   UR_TYPE_UINT8, /* NTP_POLL */
   UR_TYPE_UINT8, /* NTP_PRECISION */
   UR_TYPE_UINT8, /* NTP_STRATUM */
   UR_TYPE_UINT8, /* NTP_VERSION */
   UR_TYPE_UINT8, /* PROTOCOL */
   UR_TYPE_UINT8, /* TCP_FLAGS */
   UR_TYPE_UINT8, /* TOS */
   UR_TYPE_UINT8, /* TTL */
   UR_TYPE_BYTES, /* ARP_DST_HA */
   UR_TYPE_BYTES, /* ARP_DST_PA */
   UR_TYPE_BYTES, /* ARP_SRC_HA */
   UR_TYPE_BYTES, /* ARP_SRC_PA */
   UR_TYPE_STRING, /* DNS_NAME */
   UR_TYPE_BYTES, /* DNS_RDATA */
   UR_TYPE_BYTES, /* DST_MAC */
   UR_TYPE_STRING, /* HTTP_CONTENT_TYPE */
   UR_TYPE_STRING, /* HTTP_HOST */
   UR_TYPE_STRING, /* HTTP_METHOD */
   UR_TYPE_STRING, /* HTTP_REFERER */
   UR_TYPE_STRING, /* HTTP_URL */
   UR_TYPE_STRING, /* HTTP_USER_AGENT */
   UR_TYPE_STRING, /* NTP_ORIG */
   UR_TYPE_STRING, /* NTP_RECV */
   UR_TYPE_STRING, /* NTP_REF */
   UR_TYPE_STRING, /* NTP_REF_ID */
   UR_TYPE_STRING, /* NTP_SENT */
   UR_TYPE_STRING, /* SIP_CALLED_PARTY */
   UR_TYPE_STRING, /* SIP_CALL_ID */
   UR_TYPE_STRING, /* SIP_CALLING_PARTY */
   UR_TYPE_STRING, /* SIP_CSEQ */
   UR_TYPE_STRING, /* SIP_REQUEST_URI */
   UR_TYPE_STRING, /* SIP_USER_AGENT */
   UR_TYPE_STRING, /* SIP_VIA */
   UR_TYPE_BYTES, /* SRC_MAC */
};
ur_static_field_specs_t UR_FIELD_SPECS_STATIC = {ur_field_names_static, ur_field_sizes_static, ur_field_types_static, 66};
ur_field_specs_t ur_field_specs = {ur_field_names_static, ur_field_sizes_static, ur_field_types_static, 66, 66, 66, NULL, UR_UNINITIALIZED};
