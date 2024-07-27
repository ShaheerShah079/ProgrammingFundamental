#include<stdio.h>
int rev(int *ptr)
{
	int arr1[9],i;
	for(i=0;i<9;i++)
	{
		arr1[i]=ptr[8-i];
	}
    for(i=0;i<9;i++)
	{
		ptr[i]=arr1[i];
	}
	
}
int rev1(int arr[])
{
	int i,temp;
	for(i=0;i<4;i++)
	{
	temp=arr[i];
	arr[i]=arr[8-i];
	arr[8-i]=temp;
	}
}
int main()
{
	int array[]={1,2,3,4,5,6,7,8,9},length,i;
	for(i=0;i<9;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
	rev(array);
	for(i=0;i<9;i++)
	{
		printf("%d\t",array[i]);
	}
		printf("\n");
	rev1(array);
	for(i=0;i<9;i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}
