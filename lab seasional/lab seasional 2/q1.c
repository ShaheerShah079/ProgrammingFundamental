#include<stdio.h>
int dsendin(int *ptr,int row,int colm)
{

 int i,j;
 int ans=(row*colm-1);
    printf("Dsscending array is \n");
for(i=0;i<row;i++)
	{
		;
		for(j=0;j<colm;j++)
		{ 
	    printf("%d	",*(ptr+ans));
		ans--;	   
		
		}
		printf("\n");
		
	}	

}
int main()
{
	int i,j,row,colm,check;
	printf("Enter Row and coloumn of 2D aray\n");
	scanf("%d %d",&row,&colm);
	int aray[row][colm];
	for(i=0;i<row;i++)
	{
		for(j=0;j<colm;j++)
		{
			printf("Enter Array[%d][%d] element : ",i,j);
			scanf("%d",&aray[i][j]);
		}
	}
	dsendin(&aray[0][0],row,colm);
	
	return 0;
}
