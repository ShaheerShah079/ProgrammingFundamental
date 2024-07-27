#include<stdio.h>
void function(int a[10],int b[10],float c[10])
{
	int i,check,id=0;

	printf("Enter player id to check.How many match they played\n");
	ss:
	scanf("%d",&check);
		for(i=0;i<10;i++)
	{
		if(a[i]==check)
		{
			id=1;
		printf("Total match played by that person is %d\n",b[i]);
	   }
	   
	}
	if(id==0)
	{
	printf("Please Enter correct player id\n");
	goto ss;	
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
