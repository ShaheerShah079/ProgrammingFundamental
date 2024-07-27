#include<stdio.h>
int func(int *ptr)
{
	printf("%d",*(ptr+1));
	ptr[3]=2222;
}

int main()
{
	int arr[10]={11,23,33,43,53,63,73,83,93,130};
	func(arr);
	printf("%d",arr[3]);
	return 0;
}
