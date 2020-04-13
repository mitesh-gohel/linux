#include<stdio.h>
#include<dlfcn.h>
void sum();
int main()
{
	int op = 0;
	void * handler = NULL;
	void (*fp)(void) = NULL;
	printf("Enter 1 for sum : \n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			handler = dlopen("./lib.so",RTLD_NOW);
			printf("before calling function \n");
			getc(stdin);
			getc(stdin);
			if(handler == 0)
			{
				printf("%s \n",dlerror());
				return 1;
			}
			fp = dlsym(handler, "sum");
			if(fp == 0)
			{
				printf("%s \n",dlerror());
				return 1;
			}
			//sum();
			(*fp)();
			dlclose(handler);
			break;
		default :
			return 1;
	}
	return 0;
}


