#include<stdio.h>
int main()
{
	char a;
	int i,j;
	for(i=1;i<=8;i++)
	{
		a='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
			a++;
		}
		printf("\n");
	 } 
	return 0;
}
