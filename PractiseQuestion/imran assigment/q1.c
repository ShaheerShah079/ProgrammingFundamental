#include<stdio.h>

void display(int a[20][20],int row,int col)
{
	int i,j,k;
	printf("            ");
	for(j=0;j<col;j++)
		{
			printf("course%d   ",j+1);
		}
			printf("\n");
for(i=0;i<row;i++)
	{
		printf("student:%d",i+1);
		if(i>=0&&i<=8)
			{
				printf("    ");
			}
		if(i>=9)
			{
				printf("   ");
			}
			
		for(j=0;j<col;j++)
		{
			printf("%d",a[i][j]);
			if(a[i][j]>=10)
			{
				printf("         ");
			}
			if(a[i][j]>=0&&a[i][j]<=9)
			{
				printf("          ");
			}
		}
		printf("\n");
	}
	printf("\n\n");	
}

void scan(int a[20][20],int row,int col)
{
	int i,j;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter [%d][%d] index : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

int main()
{
	int row,col;
	int array[20][20];
	printf("Enter the row and coloumn of the matrix\n");
	scanf("%d%d",&row,&col);
	scan(array,row,col);
	display(array,row,col);
	return 0;
}
