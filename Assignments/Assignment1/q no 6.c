#include<stdio.h>
int main()
{
	int x,a,b,c,d;
	printf("Enter a 4 digit number\n");
	scanf("%d",&x);
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    c=x%10;
    x=x/10;
    d=x;
    printf("Digits are %d\t%d\t%d\t%d\t",d,c,b,a);
	return 0;
}
