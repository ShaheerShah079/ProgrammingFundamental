#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
# define size 7
int main()
{
	int i,j,a,k;
	unsigned int face[size]={0};
	srand(time(0));
	for(i=0;i<100;i++)
	{
		a=1+rand()%6;
		face[a]++;
	}
	printf("%s\t%s\t%s","Face","Frequency","Histogram\n");
	for(j=1;j<7;j++)
	{
		printf("%d\t    %d\t    ",j,face[j]);
		for(k=1;k<=face[j];k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
