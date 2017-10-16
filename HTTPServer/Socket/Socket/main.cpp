#ifdef WIN32
#include <Windows.h>
#endif // WIN32



int main(int argc,char *argv[]) {
	#ifdef WIN32
	WSADATA ws;
	WSAStartup(MAKEWORD(2, 2), &ws);
	#endif // WIN32

	return 0;
}
