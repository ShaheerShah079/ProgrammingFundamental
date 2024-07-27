#include<stdio.h>
#include<stdlib.h>
void below25(int a[10],int b[10],float c[10]);
int highrun(int a[10],int b[10],float c[10]);
void searchbyid(int a[10],int b[10],float c[10]);
int count(int a[10],int b[10],float c[10]);
void byrank(int *ptr1,int *ptr2,float *ptr3);
int main()
{

	ss:	
	printf(".......Press.......\n");
	printf("1. Run-Rate below 25\n2. Highest Run rate\n3. Search by player id\n4. Count Run-Rate greater 50\n5. Player ranking on the basis of Run rate\n6. Exit\n");
	int playerid[10]={27891,28761,34591,43121,01234,68123,86845,76854,88453,67643};
	int totalmatchplayed[10]={15,25,76,12,43,56,76,12,21,34};
	float runrate[10]={10.22,65.12,21.54,31.23,23.23,35.76,32.34,54.76,76.39,12.23};
	int cas;
	scanf("%d",&cas);
	switch(cas)
	{
		case 1:
		below25(playerid,totalmatchplayed,runrate);	
			goto ss;
		case 2:
        printf("Person that have highest run rate id is %d\n\n",highrun(playerid,totalmatchplayed,runrate));	
			goto ss;
		case 3:
		searchbyid(playerid,totalmatchplayed,runrate);	
			goto ss;
		case 4:
		printf("The number of players whos run rate is greater tha 50 is %d\n\n",count(playerid,totalmatchplayed,runrate));	
			goto ss;
		case 5:
		byrank(playerid,totalmatchplayed,runrate);	
			goto ss;
		case 6:
			printf("Allah Hafiz");
		exit(0);					
	}
	
}
void below25(int a[10],int b[10],float c[10])
{
	int i;
		for(i=0;i<10;i++)
	{
		if(c[i]<=25)
		{
		
		printf("Player %d id is %d\n",i+1,a[i]);
		printf("Total match played is %d\n",b[i]);
		printf("Run rate is %.2f\n",c[i]);
		printf("\n\n");
		
	}
	}
}
int highrun(int a[10],int b[10],float c[10])
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
void searchbyid(int a[10],int b[10],float c[10])
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
		printf("Total match played by that person is %d\n\n",b[i]);
	   }
	   
	}
	if(id==0)
	{
	printf("Please Enter correct player id\n");
	goto ss;	
	}
	}
int count(int a[10],int b[10],float c[10])
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
void byrank(int *ptr1,int *ptr2,float *ptr3)
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
	byrank(ptr1,ptr2,ptr3);	
	}
}

