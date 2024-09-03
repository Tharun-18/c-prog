#include<stdio.h>
int main(int argc,char * argv[])
{
	int arr[4]={20,40,70,80};
	int *parr=NULL;
	parr=arr;

	while(parr<=&arr[3])
	{
	
		printf("%d\n",*parr);
		parr++;
	}
	return 0;


}

