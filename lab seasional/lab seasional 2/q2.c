#include<stdio.h>
int check(int *ptr, int x, int y)
{
	int i,j;
	for(i=0;i<(x);i++)
	{
		for(j=0;j<y;j++)
		{
		int num3;
		num3=(ptr);
		if(num3%2==0)
		{
			printf("The index aray[%d][%d] has address:%d is even\n",i,j,(ptr+i));
		}
		else 
		{
			printf("The index aray[%d][%d] has address:%d is odd\n",i,j,(ptr+i));
		}
		ptr++;
		
	}
}
}
int main()
{
	int aray[100][100],row,colm;
	printf("Enter Row and coloumn of 2D aray\n");
	scanf("%d %d",&row,&colm);
	printf("We declare an array of %d by %d size\n",row,colm);
	check(aray,row,colm);
	
	return 0;
}
