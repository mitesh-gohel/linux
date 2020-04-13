#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
char str[50]= {0};
int pid;
int fd;


pid = fork();
while(1)
{
if(pid == 0)	//child
{
	fd = open("data1_ipc",O_RDONLY);		//process p2 receive data from data1_ipc
	read(fd,str,sizeof(str));		//receive  data by child from data1_ipc
	printf("%s\n",str);
}
else if(pid > 0)	//perent
{
	printf("Enter Message : ");
	gets(str);
	//scanf("%s",str);

	fd = open("data2_ipc",O_WRONLY);		//process p2 send data in data2_ipc
	write(fd,str,sizeof(str));	//send data by perent in data2_ipc
}

}

return 0;
}
