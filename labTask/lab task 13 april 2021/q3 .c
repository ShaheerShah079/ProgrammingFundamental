#include<stdio.h>
int square ()
{
	int i,x;
	printf("The square of 1-10 num is\n");
	for(i=1;i<=10;i++)
	{
		x=i*i;
		printf("%d\n",x);
		
	}
}


int main()
{
	square();
	return 0;
}
