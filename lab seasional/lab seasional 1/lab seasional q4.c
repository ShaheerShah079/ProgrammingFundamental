#include<stdio.h>
int main()
{
	int a,sum=0,i=0;
	float aver;
	printf("Enter the grade of students and -1 to terminate \n");
	scanf("%d",&a);
	ss:
	{
	 sum=sum+a;	
	 scanf("%d",&a);
	 i++;
	}
	if(a!=-1)
	{
		goto ss;
	}
	else
	{
	aver=(float)sum/i;
	printf("Class average are %.2f",aver);	
}
	return 0;
}
