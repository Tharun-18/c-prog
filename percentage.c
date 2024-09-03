#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,tot;
	printf("enter the value of s1,s2,s3,s4,s5:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	tot=(s1+s2+s3+s4+s5)/5;
	if(tot>85)
		printf("A Grade");
	else if(tot>75)
		printf("B Grade");
	else if(tot>60)
		printf("C Grade");
	else if(tot>45)
		printf("D Grade");
	else
		printf("F Grade");
	return 0;
}
