#include<stdio.h>

int main()
{
	int m,n,row,col;
	int a[100][100],b[100][100],c[100][100];
	printf("Enter value of m and n:\n");
	scanf("%d%d",&m,&n);
	

	printf("Enter elements of 1st array:\n");
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			printf("Enter [%d][%d] index \n",row,col);
			scanf("%d",&a[m][n]);
			printf("%d   ",a[m][n]);
		}
	}
	printf("Enter elements of 2nd array:\n");
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			printf("Enter [%d][%d] index \n",row,col);
			scanf("%d",&b[m][n]);
			printf("%d   ",b[m][n]);
				
		}
	}
	printf("Elements of 1st array are:\n");
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			printf("%d   ",a[m][n]);
		}
		printf("\n");
	}

	printf("Elements of 2nd array are:\n");
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
			printf("%d   ",b[m][n]);
		}
		printf("\n");
	}

	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
		{
	printf("%d ",a[m][n]+b[m][n]);
		}
		printf("\n");
	}
	
	return 0;
}
