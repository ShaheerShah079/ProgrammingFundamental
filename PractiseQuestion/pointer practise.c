#include<stdio.h>
int main()
{
	int a;
	a=7;
	printf("%d, %p\t",a,&a);
	a=10;
	printf("%d, %p",a,&a);
	return 0;
}
