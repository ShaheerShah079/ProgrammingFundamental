#include<stdio.h>
int main()
{
	int aray[]={35,57,99,55,40,54,61,60,78,60,201,30,101,63,47,100,49,51,58,100};
	int max,check,i,j,k,count;
	for(j=0;j<20;j++)
	{
	max=aray[0];
    for(i=0;i<20;i++)
    {
    	if(aray[i]>max)
    	{
    		check=i;
    		max=aray[i];

		}
  
	}

		printf("Index is %d and value is %d\n",check,max);
		aray[check]=0;
		check=0;
}
		
	return 0;
}
