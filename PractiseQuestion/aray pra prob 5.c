#include<stdio.h>
int main()
{
	int f[]={12,14,15,21,54,23,65,32,43,54,55};
	int i,check=0,num=556;
	
	for(;f[i]!=0;i++)
{
check++;
	}	
	printf("%d",check);
	for(i=0;i<check;i++)
	{
		if(f[i]==num)
		{
			printf("in array");
			break;
		}
		if(f[i]!=num&&i==check-1)
		{
			printf("not in aray");
		}
	}
	return 0;
}
