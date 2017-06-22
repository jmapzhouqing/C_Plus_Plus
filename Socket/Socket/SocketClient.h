#ifndef _SOCKETCLIENT_H_
#define _SOCKETCLIENT_H_

#include "socket.h"

class SocketClient{
public:
	SocketClient();
	~SocketClient();

	bool init();

	bool connect();
	
	bool read(char*buff, int _len);
	bool send(char*buff,int _len);

	void disconnect();

	void close();

	bool isConnected();
private:
	SOCKET _socket;
	sockaddr
};

#endif