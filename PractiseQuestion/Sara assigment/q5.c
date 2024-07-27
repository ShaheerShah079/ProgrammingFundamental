#include<stdio.h>
void function(int *ptr1,int *ptr2,float *ptr3)
{
	float max=*ptr3;
	int id=0,i;
	static int rank=1,ans=0;
	for(i=1;i<10;i++)
	{
	if(*(ptr3+i)>max)
	{
		max=*(ptr3+i);
		id=i;
		}	
	}
	printf("Rank number %d person Info is\n",rank);
	printf("Player id is %d\n",*(ptr1+id));
	printf("Player total match played is %d\n",*(ptr2+id));
	printf("Player run rate is %.2f\n",*(ptr3+id));
	printf("\n\n");
	rank++;
	ans++;
	*(ptr3+id)=0;
	if(ans==10)
	{
		return;
	}
	else
	{
	function(ptr1,ptr2,ptr3);	
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
