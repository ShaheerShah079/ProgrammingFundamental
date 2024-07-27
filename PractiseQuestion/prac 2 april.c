#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,m;
	printf("Enter row and colom\n");
	scanf("%d%d",&n,&m); 
	int a[n][m];
	int row, col;
	printf("Enter Array:");
	for(row=0;row<n;row++)
	{
		for(col=0;col<m;col++)
		{
		scanf("%d",&a[row][col]);	
		}
	}
	printf("Array in ascending order is:\n");
	for(row=0;row<n;row++)
	{
		for(col=0;col<m;col++)
		{
		printf("%d ",a[row][col]);	
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Array in descending order is:\n");
	for(row=(n-1);row>=0;row--)
	{
		for(col=(m-1);col>=0;col--)
		{
		printf("%d ",a[row][col]);	
		}
		printf("\n");
	}
	
	
	return 0;
}

