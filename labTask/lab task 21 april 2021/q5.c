#include<stdio.h>
int main()
{   int i,j;
	int aray[10];
	for(i=0;i<10;i++)
	{
		printf("Enter %d index value\t",i);
		scanf("%d",&aray[i]);
	}
	printf("\n");
	for(j=0;j<10;j++)
	{
		printf("%d index value is %d\n",j,aray[j]);
	}
	
	return 0;
}
