//To implment meaasage queue
//sender program
#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>

struct msbuf
{
	long mtype;
	char str[20];
};


int main()
{
int id=0;
struct msbuf v;

v.mtype = 1;

printf("Enter Message : ");
scanf("%s",v.str);

id = msgget(4,IPC_CREAT|0644);

msgsnd(id, &v ,strlen(v.str) + 1, 0);


return 0;
}

