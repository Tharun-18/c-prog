#include<stdio.h>
int main()
{
	int a=10;
	int *pa;
	pa=&a;
	printf("%p",pa);
	printf("%d/n",a);
	printf("%d/n",*pa);
	printf("%p/n",&a);
	return 0;
}
