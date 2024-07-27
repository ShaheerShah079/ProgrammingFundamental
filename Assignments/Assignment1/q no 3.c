#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,d,s;
   float area;
   printf("Enter three side of triangle\n");
   scanf("%f%f%f",&a,&b,&c);
   s=(a+b+c)/2;
   d=(s)*(s-a)*(s-b)*(s-c);
   area=sqrt(d);
   printf("Area of triangle is %f",area);
	return 0;
}
