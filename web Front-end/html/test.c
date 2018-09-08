#include <stdio.h>
#include <string.h>

int main()
{

	int sockfd;
	struct sockaddr_in server;
	struct sockaddr_in client;
	socklen_t len;
	int num;

	char buf[100];
	if((sockfd = socket(AF_INET, SOCK_DGRAM, 0)） == -1)
	{
		printf("Creating socket failed.\n");
		exit(1);
	}


	printf("This is a c program test\n");
	return 0;
}