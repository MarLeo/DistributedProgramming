//
//  mybsdfun.h
//  Lab1_pd1
//
//  Created by Martin Tchokonthe on 01/05/16.
//  Copyright © 2016 Martin Tchokonthe. All rights reserved.
//

#ifndef mybsdfun_h
#define mybsdfun_h
/*	HEADER FOR BSD4.3 UNIX
 */

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <netinet/in.h>

#include <unistd.h>
#define closesocket(x)	close(x)
#define INVALID_SOCKET	-1

typedef int SOCKET;

/* Utility Function Prototypes */
void err_fatal(char *mes);
void err_continue(char *mes);
void SockStartup(void);
void SockCleanup(void);
void showAddr(char * str, struct sockaddr_in * a);


#endif /* mybsdfun_h */
