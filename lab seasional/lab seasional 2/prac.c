#include<stdio.h>
int dsendin(int *ptaq,int row,int colm)
{

 int i,j;
    printf("Dsscending array is \n");
    printf("%d	",*(ptaq+0));
    printf("%d	",*(ptaq+1));
    printf("%d	",*(ptaq+2));
    printf("%d	",*(ptaq+3));
    printf("%d	",*(ptaq+4));
    printf("%d	",*(ptaq+5));
    printf("%d	",*(ptaq+6));
		printf("\n");	

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
	dsendin(&aray[0],row,colm);
	
	return 0;
}
