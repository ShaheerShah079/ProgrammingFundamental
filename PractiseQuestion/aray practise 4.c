#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,aray[100][100],a,x,y;
	scanf("%d %d ",&a);
	x=a-1;
	y=x-1;
	
	for(i=0;i<=a;i++)
	{
		scanf("%c",&aray[0][i]);
	}
	for(j=0;j<=a;j++)
	{
		for(k=0;k<=y;k++)
		{
			aray[k+1][j]=aray[k][j];
		}
	}
	for(l=0;l<=x;l++)
	{
		for(m=0;m<=l;m++)
		{
			printf("%c",aray[l][m]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
