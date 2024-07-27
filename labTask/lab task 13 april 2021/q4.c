#include<stdio.h>
float average(int a, int b, int c,int d, int e ,int f)
{
	float ave;
	ave=(float)(a+b+c+d+e+f)/6;
	return ave;
 } 
int max(int a, int b, int c,int d, int e ,int f)
{ 
int max;
	if(a>b&&a>c&&a>d&&a>e&&a>f)
	{
		max =a;
	}
	else if(b>a&&b>c&&b>d&&b>e&&b>f)
	{
		max =b;
	}
	else if(c>a&&c>b&&c>d&&c>e&&c>f)
	{
		max =c;
	}
	else if(d>a&&d>c&&d>b&&d>e&&d>f)
	{
		max =d;
	}
	else if(e>a&&e>c&&e>d&&e>b&&e>f)
	{
		max =e;
	}
	else 
	{
		max =f;
	}
	return max;
}


int main()
{
	int num1,num2,num3,num4,num5,num6;
	printf("Enter six number\n");
	scanf("%d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6);
	printf("The average of number is %f\n",average(num1,num2,num3,num4,num5,num6));
	printf("The maximum in all number is %d",max(num1,num2,num3,num4,num5,num6));
	return 0;
}
