#include<stdio.h>
int main(int args,char* argv[])
{
	int n1,n2,n3=0;
	n1=20;
	n2=2;
	while(n1>n2)
	{
		if(n1%2==0)
		{
			n2=n2-2;
			n3++;
			printf("%d\n",n1);
		}
	else if(n1%2==1)
	{
		n2=n2-2;
		n3++;
		printf("%d\n",n1);
	}
	}
	return 0;
}
