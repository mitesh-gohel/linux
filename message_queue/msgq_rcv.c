//To implment meaasage queue
//receiver  program
#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

struct msbuf
{
	long mtype;
	char str[20];
};


int main()
{
int id=0;
struct msbuf v;


id = msgget(4,IPC_CREAT|0644);

msgrcv(id, &v ,sizeof(v.str),1 , 0);

printf("%s\n",v.str);

return 0;
}

