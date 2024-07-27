#include<stdio.h>
int main()
{
  int a,c1=0,c2=0,c3=0,i=1;
  printf("Enter 5 number\n");
  while (i<=5)
  {
  	 scanf("%d",&a);
  	if(a==0)
  	{
  		c1++;
	}
	else if(a>0)
  	{
  		c2++;
	  }  
	  else
	  {
	  	c3++;
	  }
	  i++;
  }
  printf("You enter %d positive number %d zero and %d negative number",c2,c1,c3);
	return 0;
}
