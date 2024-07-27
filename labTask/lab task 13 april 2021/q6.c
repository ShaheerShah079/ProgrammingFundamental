#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int dice()
{
	int i,c,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
		srand(time(0));
	for(i=1;i<=6000;i++)
	{
	
	c=(1+(rand()%6));
 	if(c==1)
	{
		c1++;
		}	
    else if(c==2)
	{
		c2++;
		}	
    else if(c==3)
	{
		c3++;
		}	
    else if(c==4)
	{
		c4++;
		}	
    else if(c==5)
	{
		c5++;
		}	
		else
		{
			c6++;
		}
		
	}

	printf("1 come %d times\n2 come %d times\n3 come %d times\n4 come %d times\n5 come %d times\n6 come %d times\n",c1,c2,c3,c4,c5,c6);
}



int main()
{
	dice();	
	return 0;
}
