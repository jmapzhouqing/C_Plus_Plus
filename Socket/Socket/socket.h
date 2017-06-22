#ifndef _SOCKET_H_
#define _SOCKET_H_

#ifdef _WIN32
#include <Windows.h>
#include <WS2tcpip.h>
#elif _linux_
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<errno.h>
#include<sys/syscall.h>
#include<fcntl.h>
#include<netinet/tcp.h>
#endif

enum SocketStatus{
	
};



#endif