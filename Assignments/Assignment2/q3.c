#include<stdio.h>
void modifyMarks(int arr[5]);
int main(void)
{
	int marks[]={10,5,3,4,5},i;
	modifyMarks(marks);
	printf("\nModified marks\n");
	for(i=0;i<5;i++)
	{
		printf("%d \t",marks[i]);
	}
	return 0;
}
void modifyMarks(int arr[5])
{
	int i;
	printf("orignal marks\n");
		for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
		arr[i]*=2;
	}
	
}
