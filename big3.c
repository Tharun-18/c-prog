#include<stdio.h>
int main()
{
	int a=5,b=7,c=2;
	if(a>b)
	{
		if(a<c)
			printf("c is big");
		else
			printf("a is big");
	}
	else
	{
		if(b<c)
			printf("c is big");
		else
			printf("b is big");
	}
	return 0;
}
	
