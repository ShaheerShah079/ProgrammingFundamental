#include<stdio.h>
float area(float a)
{
	float area;
	area=3.14*a*a;
	return area;
}
int main()
{
    float r;
    printf("Enter the radius of circle\n");
    scanf("%f",&r);
    printf("The area of the circle is %.2f",area(r));
	return 0;
}
