#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<stdlib.h>


void main(int n,char **argv)
{
	int port = atoi(argc[1]);
	int fd = 0;
	
	struct sockaddr_in v;
	v.sin_family = AF_INET;
	v.sin_port = port;
	v.sin_addr.unit32_t = INADDR_ANY;
	

	printf("port number = %d \n",port);

	fd = socket(AF_INET,SOCK_STREAM,0);
	peror("socket : ");

	bind(fd,(struct sockaddr)v,  );


}
