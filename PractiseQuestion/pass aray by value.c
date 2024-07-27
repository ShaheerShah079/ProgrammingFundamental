#include<stdio.h>
int display(int a)
{
	printf("%d\n",a);
	return a;
}
int main()
{
	int aray[]={1,2,3,4,5};
	int i,c,sum=0;
	for(i=0;i<5;i++)
	{
		c=display(aray[i]);
		sum+=c;
	}
	printf("sum is %d",sum);
	
	
	return 0;
}
