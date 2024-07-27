#include<stdio.h>
float area(float r) 
{
	float area;
	area=r*r*3.14;
	return area;
}
float circum(float r)
{
	float circum;
	circum=2*3.14*r;
	return circum;
}

int main()
{
	float r;
	printf("Enter the radius of a numb\n");
	scanf("%f",&r);
	printf("The area of circle is %.2f\n",area(r));
	printf("the circumference of circle is %.2f ",circum(r));
	return 0;
}
