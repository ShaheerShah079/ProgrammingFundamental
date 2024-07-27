#include<stdio.h>
int main()
{
	int c;
	float a,b,d;
	printf("Enter obtained marks of a course\t");
	scanf("%d",&a);
	printf("Enter total marks of a course\t");
	scanf("%d",&b);
	ss:
	printf("Press 1 to calculate percentage\nPress 2 to display grade\n");
	scanf("%d",&c);
	d=(a*100)/b;
	switch(c)
	{
	case 1:
	
		printf("You obtained %f percent",d);
        break;
    case 2:
    	if(d>=80)
    	{
    		printf("Your grade is A+");
		}
		else if(d>=70)
    	{
    		printf("Your grade is A");
		} 
		else if(d>=60)
    	{
    		printf("Your grade is B");
		} 
		else if(d>=50)
    	{
    		printf("Your grade is C");
		} 
		else if(d>=40)
    	{
    		printf("Your grade is D");
		} 
		else if(d>=33)
    	{
    		printf("Your grade is E");
		} 
		else
    	{
    		printf("Your grade is F");
		} 
    break;	
default:
		printf("Please enter 1 or 2 \n");
		goto ss;
	 
}
	return 0;
}
