#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='D';i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%c%d\t",i,j);
		}
		printf("\n");
	}
	return 0;
}
