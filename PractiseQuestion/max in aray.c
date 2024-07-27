#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int maxi(int aray[],int x)
{
int max,i;


max=aray[0];
for(i=1;i<=x;i++)
{  printf("%d\t",aray[i]);
	if(max<aray[i])
	{
		max=aray[i];
	}
	
}
     return max;
}
int mini(int aray[],int x)
{
int min,i;


min=aray[0];
for(i=1;i<=x;i++)
{ 
	if(min>aray[i])
	{
		min=aray[i];
	}
	
}
     return min;
}

int main()
{
	srand(time(0));
	int i,aray[10],c,d;
	//intf("Store 6 number in aray");
	for(i=1;i<=10;i++)
	{
		scanf("%d",aray[i]);
	}
	c=maxi(aray,i);
	d=mini(aray,i);
	printf("the max in all number is %d and min is %d",c,d);
	return 0;
}
