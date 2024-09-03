#include<stdio.h>
int main(int args,char* argv[])
{
	int f1=5,f2=8,f3,i=3,length;
	printf("inputs");
	scanf("%d",&length);
	while(i<length)
	{
		printf("%d,",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
		i=i+1;
	}
	return 0;
}
