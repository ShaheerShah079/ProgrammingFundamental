#include<stdio.h>
int main()
{
	int a,i,j,total=0;
	int aray[100];
	printf("Enter aray size");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{ printf("Enter %d index of aray\t",i);
	 scanf("%d",&aray[i]);	
	}
	printf("\n");
	for(j=0;j<a;j++)
	{
		total+=aray[j];
	}
	printf("The addition of all element you enter is %d",total);
	return 0;
}
