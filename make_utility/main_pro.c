//This is main program 
//It require 4 more file : sum.c sub.c mul.c div.c

int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);


#include<stdio.h>
int main()	
{
	int x = 0, y = 0 , ans = 0;
	char op = 0;
	printf("Enter x and y respectivly = ");
	scanf("%d%d",&x, &y);
	printf ("Select operation (+ - * /): ");
	scanf(" %c",&op);

	switch(op)
	{
		case '+':
			ans = sum(x,y);
			break;
		case '-':
			ans = sub(x,y);
			break;
		case '*':
			ans = mul(x,y);
			break;
		case '/':
			ans = div(x,y);
			break;
		default :
			printf("Invalid operation \n");
	}
	printf("%d %c %d = %d \n",x,op,y,ans);

	
	return 0;
}
