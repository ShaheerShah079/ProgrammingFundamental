#include<stdio.h>
int main()
{
	int l1,l2,l3,l4,l5,i,j,k,l,m,n,aray[100][100],a,x,y,a1=0,b=0;
scanf("%d %d",&a);
x=a-1;
y=x-1;

	for(i=0;i<=x;i++)
	{
		scanf("%c",&aray[0][i]);
	}
	for(l1=0,l2=a;l1<=x,l2<=2*a-1;l1++,l2++)
	{
		aray[0][l2]=aray[0][l1];
	}
	for(l5=0;l5<=2*a-1;l5++)
	{
		printf("%c",aray[0][l5]);
	}
	
	
	/*
	for(j=0;j<=x;j++)
	{
		for(k=0;k<=y;k++)
		{
			aray[k+1][j]=aray[k][j];
		}
	}
	for(l3=a;l3<=2*a-1;l3++)
	{
		for(l4=0;l4<=y;l4++)
		{
			aray[l4+1][l3]=aray[l4][l3];
		}
 }
 for(k=0;k<=x;k++)
	{
		for(l=x;l>=k;l--)
		{
		printf(".");
	}
	   for(m=0;m<=2*k;m++)
	   {
	   	printf("%c",aray[k][m]);
	   
	   }
	printf("\n");
}
	
	
	/*for(k=0;k<=x+1;k++)
	{
	
		for(l=x;l>=k;l--)
		{
		printf(" ");
	}
	   for(m=0;m<=2*k-1;m++)
	   {
	   	printf("%c",aray[k][m]);
	   }
	printf("\n");*/

	//}	
	
	return 0;
}
