#include<stdio.h>
int function(int a[10],int b[10],float c[10])
{
	int i,k=0;
		for(i=0;i<10;i++)
	{
		if(c[i]>50)
		{
		k++;
	}
	}
	return k;
}
int main()
{
	int playerid[10]={27891,28761,34591,43121,01234,68123,86845,76854,88453,67643};
	int totalmatchplayed[10]={15,25,76,12,43,56,76,12,21,34};
	float runrate[10]={10.22,65.12,21.54,31.23,23.23,35.76,32.34,54.76,76.39,12.23};
	int index=function(playerid,totalmatchplayed,runrate);
	printf("The number of players whos run rate is greater tha 50 is %d ",index);

	return 0;
}
