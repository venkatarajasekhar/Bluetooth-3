#include <winsock2.h>
#include <ws2bth.h>
//#include <BluetoothAPIs.h>
//#include <stdio.h>
#include <stdlib.h>
//project->properties->link->Additional Dependances ws2_32.lib

void err_quit(char* msg)
{
	LPVOID lpMsgBuf;
	FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER |
		FORMAT_MESSAGE_FROM_SYSTEM,
		NULL, WSAGetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR)&lpMsgBuf, 0, NULL);
	MessageBox(NULL, (LPCTSTR)lpMsgBuf, msg, MB_ICONERROR);
	LocalFree(lpMsgBuf);
	exit(-1);
}
int main(){
	WSADATA wsa_data;
	SOCKET socket;
	SOCKADDR_BTH socket_Addr_Bth;

	//init winsock
	if (WSAStartup(MAKEWORD(2, 2), &wsa_data) != 0){ return -1; }
	MessageBox(NULL, "complete to init winsock", "complete", MB_OK);

	WSACleanup();
	return 0;
}