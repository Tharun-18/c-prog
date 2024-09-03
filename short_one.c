#include<stdio.h>
int main()
{
	int sum=0,result,i=0,ori,size=12;
	int arr[20]={1,2,3,4,5,6,7,8,10,11,12};
	while(i<11)
	{
		sum=sum+arr[i];
		i++;
	}
	printf("%d\n",sum);
	ori=size*(size+1)/2;
	printf("%d\n",ori);
	result=ori-sum;
	printf("%d\n",result);
	return 0;
}
