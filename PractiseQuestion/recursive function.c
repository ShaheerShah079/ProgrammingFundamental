#include<stdio.h>
int fac(int a)
{
	
	if(a==0||a==1)
	{
		return 1;
	}
	else
	return a*fac(a-1);
}
int fab(int a)
{
	if(a==0||a==1)
	return 1;
	else
	return fab(a-1)+fab(a-2); 
}
int han(int a)
{
	if (a==1)
	return 1;
	else
	return (2*han(a-1)+1);
	
}
int main()
{
	int a=5;
	printf("fac %d",fac(a));
	printf("fab %d",fab(6));
	printf("hanoi %d",han(8));
/*int x=0,y=1,z,i,b;
scanf("%d",&b);
for(i=1;i<=(b-2);i++)
{
	z=x+y;
	x=y;
	y=z;
}
printf("%d",z);
*/


	return 0;
}
