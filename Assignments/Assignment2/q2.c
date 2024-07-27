#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int face[20]={0},i,j,k,check;
	srand(time(0));
	for(i=0;i<100;i++)
	{
		check=1+(rand()%6);
		face[check]++;
	}
	printf("Face \t Frequency \t Histogram\n");
	for(j=1;j<=6;j++)
	{
		printf("%d \t %d\t\t",j,face[j]);
		for(k=1;k<=face[j];k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
