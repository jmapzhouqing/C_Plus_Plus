#include "SocketClient.h"

SocketClient::SocketClient(){
#ifdef _WIN32
	WSAData ws;
	if (WSAStartup(MAKEWORD(2, 2), &ws)){
		
	}
#endif
}

bool SocketClient::init(){
	if (_socket != INVALID_SOCKET){
		this->close();
	}

	_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (_socket == INVALID_SOCKET){
		return false;
	}

#ifdef _WIN32
	UINT32 value = 1;
	int ret = ioctlsocket(_socket, FIONBIO, (u_long*)&value);
	if (ret == SOCKET_ERROR){
		this->close();
		return false;
	}
#elif _linux_
	int flag = fcntl(_socket,F_GETFL,0);
	int ret = fcntl(_socket,F_SETFL,flag| 0_NONBLOCK);
	if (ret == SOCKET_ERROR){
		this->close();
		return false
	}
#endif`


}

void SocketClient::close(){
	if (_socket != INVALID_SOCKET){
#ifdef _WIN32
		closesocket(_socket);
#elif _linux_
		close(_socket);
#endif
		_socket = INVALID_SOCKET;
	}
}

bool SocketClient::connect(){
	if (_socket == INVALID_SOCKET){
		if (!this->init()){
			return false;
		}
	}
}