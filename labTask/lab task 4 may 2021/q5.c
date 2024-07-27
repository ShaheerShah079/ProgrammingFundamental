#include<stdio.h>
int main()
{
	int aray[10]={0},i;
	int *ptr;
//	for(i=0;i<9;i++)
//	{
	ptr=&aray;
	printf("The address of aray is %p\n",ptr);
//	}

	return 0;
}
