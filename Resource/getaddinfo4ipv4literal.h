//
//  getaddinfo4ipv4literal.h
//  IPv6Synthesization
//
//  Created by Eric on 2018/7/2.
//  Copyright © 2018年 Eric. All rights reserved.
//

#ifndef getaddinfo4ipv4literal_h
#define getaddinfo4ipv4literal_h

#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <err.h>

/**
 * get synthesized IP Address for literal IPv4 address
 * usage: similar to getaddrinfo
 * principle: 
 *           1. get synthesized address list for "ipv4only.arpa"
 *           2. override the address list using the address passed
 *           3. remove the duplicated items
 * note: service parameter just for numberic one
 */
int	getaddrinfo4ipv4literal(const char *, const char *,
			    const struct addrinfo *,
			    struct addrinfo **);

#endif /* getaddinfo4ipv4literal_h */
