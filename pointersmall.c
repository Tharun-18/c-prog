#include<stdio.h>
int main(int argc,char argv[] )
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int length=sizeof(arr[0]);
	int *ptr=arr;
	int i=0;

	while(i<legnth)
	{
		printf("Element %d: %d\n",i,*(ptr+i));
		i++;
	}
	return 0;
}
