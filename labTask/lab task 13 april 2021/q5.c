#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int random()
{
	int i,x;
	srand(time(0));
	for(i=1;i<=20;i++)
	{		
		x=(1+(rand()%6));
		printf("%d\n",x);
	}
}

int main()
{
		printf("The 20 random number are\n");
		random();
	return 0;
}
