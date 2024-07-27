#include<stdio.h>
int function(int a[10],int b[10],float c[10])
{
	float max=c[0];
	int id=0,i;
	for(i=1;i<10;i++)
	{
	if(c[i]>max)
	{
		max=c[i];
		id=i;
		}	
	}
	return a[id];
}
int main()
{
	int playerid[10]={27891,28761,34591,43121,01234,68123,86845,76854,88453,67643};
	int totalmatchplayed[10]={15,25,76,12,43,56,76,12,21,34};
	float runrate[10]={10.22,65.12,21.54,31.23,23.23,35.76,32.34,54.76,76.39,12.23};
	int index=function(playerid,totalmatchplayed,runrate);
    printf("Person that have highest run rate id is %d\n",index);
		
	return 0;
}
