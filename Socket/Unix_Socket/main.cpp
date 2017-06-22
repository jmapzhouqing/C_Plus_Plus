#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include<windows.h>
#include<WINSOCK2.H>
#include<WS2TCPIP.H>
#include<stdio.h>

int main(){
	WSAData ws;
	if(!WSAStartup(MAKEWORD(2,2),&ws)){
		
	}

	int sock = socket(AF_INET,SOCK_STREAM,0);
	
	struct sockaddr_in servaddr;
	
	

	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(13);

	return 0;

}