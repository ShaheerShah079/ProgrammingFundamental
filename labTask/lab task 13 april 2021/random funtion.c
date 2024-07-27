#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 
int main(void)
{
    // This program will create same sequence of
    // random numbers on every program run
 int i;
 //printf("%d %d ",rand(),time(0)); 
    for(i = 1; i<=20; i++)
    {
    
        printf("%d ", (rand()));
       	 if(i%5==0)
        {
        	printf("\n");
		}
}
    return 0;
}
