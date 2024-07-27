#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,aray[100][100],a,b,x;
scanf("%d %d",&a);
x=a-1;
		
	for(i=0;i<=x;i++)
	{	
	for(j=0;j<=a;j++)
	{
		scanf("%c",&aray[i][j]);
	}
    }


	for(k=0;k<=x;k++)
	{
		
		for(l=0;l<=x;l++)
		{
		//if(k==0||k==x||l==0||k==l)
		printf("%d%d is %c",k,l,aray[k][l]);
		//else
		//printf(" ");
	}
	printf("\n");

	}
	
	
	
	return 0;
}
