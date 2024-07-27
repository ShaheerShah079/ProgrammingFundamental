#include<stdio.h>
int main()
{
	int i,j;
	printf("N\t10*N\t100*N\t1000*N\n");
	for(i=1;i<=10;i++)
	{
		for(j=i;j<=1000*i;j*=10)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	return 0;
}
