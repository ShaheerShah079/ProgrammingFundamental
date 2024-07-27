#include<stdio.h>
int func(int *ptr)
{int i,total=0;
	for(i=0;i<10;i++)
	{
	printf("%d\n",*(ptr+i));
	}
	printf("%d",*(ptr+8));
	
}
int main()
{
	int i,arr[][5]={{11,23,33,43,53},{63,73,83,93,130}};
	func(arr);
	
	return 0;
}
