#include<stdio.h>
int main()
{
int i,j,aray1[100][100],aray2[100][100],row,colm,i1,j1;
// scan first array 
	printf("Enter Row and coloumn of both 2D aray\n");
	scanf("%d %d",&row,&colm);
	for(i=0;i<row;i++)
	{
		for(j=0;j<colm;j++)
		{
			printf("Enter first Array[%d][%d] element : ",i,j);
			scanf("%d",&aray1[i][j]);
		}
	}
	printf("\n");
	//scan second array 
	for(i=0;i<row;i++)
	{
		for(j=0;j<colm;j++)
		{
			printf("Enter second Array[%d][%d] element : ",i,j);
			scanf("%d",&aray2[i][j]);
		}
	}
	printf("\n");
// first aray
printf("First Array is \n");
for(i=0;i<row;i++)
	{
		for(j=0;j<colm;j++)
		{
			printf("%d	",aray1[i][j]);
		}
		printf("\n");
	}	
//second aray
printf("Second Array is \n");
for(i=0;i<row;i++)
	{
		for(j=0;j<colm;j++)
		{
			printf("%d	",aray2[i][j]);
		}
		printf("\n");
	}	
	
// add matrix
printf("the addition of these two Array are \n");	
for(i=0;i<row;i++)
	{
		for(j=0;j<colm;j++)
		{
			printf("%d	",aray1[i][j]+aray2[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
