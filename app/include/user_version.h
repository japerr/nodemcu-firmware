#ifndef __USER_VERSION_H__
#define __USER_VERSION_H__

#include "version.h"	/* ESP firmware header */

#define NODE_VERSION_MAJOR	ESP_SDK_VERSION_MAJOR
#define NODE_VERSION_MINOR	ESP_SDK_VERSION_MINOR
#define NODE_VERSION_REVISION	ESP_SDK_VERSION_PATCH
#define NODE_VERSION_INTERNAL   0

#define NODE_VERSION_STR(x)	#x
#define NODE_VERSION_XSTR(x)	NODE_VERSION_STR(x)

#define NODE_VERSION		"NodeMCU " ESP_SDK_VERSION_STRING "." NODE_VERSION_XSTR(NODE_VERSION_INTERNAL) " built with Docker provided by frightanic.com\n\tbranch: master\n\tcommit: 67027c0d05f7e8d1b97104e05a3715f6ebc8d07f\n\tSSL: false\n\tmodules: adc,bit,dht,file,gpio,i2c,mqtt,net,node,ow,spi,tls,tmr,uart,wifi\n"

#ifndef BUILD_DATE
#define BUILD_DATE		"created on 2018-05-02 17:11\n"
#endif

extern char SDK_VERSION[];

#endif	/* __USER_VERSION_H__ */
