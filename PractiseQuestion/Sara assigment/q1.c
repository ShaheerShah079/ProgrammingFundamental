#include<stdio.h>
void function(int a[10],int b[10],float c[10])
{
	int i;
		for(i=0;i<10;i++)
	{
		printf("Player %d id is %d\n",i+1,a[i]);
		printf("Player %d total match played is %d\n",i+1,b[i]);
		printf("Player %d run rate is %.2f\n",i+1,c[i]);
		printf("\n\n");
	}
}
int main()
{
	int playerid[10]={27891,28761,34591,43121,01234,68123,86845,76854,88453,67643};
	int totalmatchplayed[10]={15,25,76,12,43,56,76,12,21,34};
	float runrate[10]={10.22,65.12,21.54,31.23,23.23,35.76,32.34,54.76,76.39,12.23};
	function(playerid,totalmatchplayed,runrate);

	return 0;
}
