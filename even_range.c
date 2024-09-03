#include<stdio.h>
int main(int args,char*argv[])
{
	int n1,n2,n3=0;
	printf("enter the value of n1,n2:");
	scanf("%d%d",&n1,&n2);
	while(n1<n2)
	{
		if(n1%2==0)
		{
			n1=n1+2;
			n3++;
			printf("%d\n",n1);
		}
		else if(n1%2==1)
		{
			printf("%d\n",n1);
			n1=n1+1;
			n3++;
		}
	}
	return 0;
}
			

