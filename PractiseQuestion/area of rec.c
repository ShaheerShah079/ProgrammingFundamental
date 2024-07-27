#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct axis
{
	int x;
	int y;
};
struct corner
{
  struct axis up;
  struct axis low;	
}; 
int recarea(struct corner a);
int recpara(struct corner a);
float circle(struct corner a);
int main()
{
	struct corner a;
	printf("Enter up x axis\n");
	scanf("%d",&a.up.x);
	printf("Enter up y axis\n");
	scanf("%d",&a.up.y);
	
	
	printf("Enter low x axis\n");
	scanf("%d",&a.low.x);
	printf("Enter low y axis\n");
	scanf("%d",&a.low.y);

    	printf("Area of rectangle is %d\n",recarea(a));
	printf("Parameter of rectangle is %d\n",recpara(a));
	printf("Area of circle is %.2f",circle(a));
	return 0;
}
int recarea(struct corner a)
{
	int breath,length;
	breath=(a.up.y-a.low.y);
	length=(a.low.x-a.up.x);	
	return length*breath;
}
int recpara(struct corner a)
{
	int breath,length,para;
	breath=(a.up.y-a.low.y);
	length=(a.low.x-a.up.x);
	para=2*(length+breath);	
	return para;
}
float circle(struct corner a)
{
	float r,area;
	r=sqrt(pow((a.low.x)-(a.up.x),2)+pow((a.low.y)-(a.up.y),2));
	area=3.14*r*r;
	return area;
}
