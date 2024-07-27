#include<stdio.h>
int check(int arr[3][4])
{
	int max,i,j,min;
	max=arr[0][0];
	min=arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
			}
			if(min>arr[i][j])
			{
				min=arr[i][j];
			}
		}
	}
	printf("\nHigest grade is %d\n",max);
	printf("Lowest grade is %d\n\n",min);
}
int average(int arr[3][4])
{
	int i,j,sum;
	float average;
	for(i=0;i<3;i++)
	{
		sum=0;
	for(j=0;j<4;j++)
	{
	sum+=arr[i][j];	
	}
	average=(float)sum/4;
	printf("The average grade for student[%d] is %.2f\n",i,average);
}
}
int main()
{
	int studentsgrade[3][4]={ { 77, 68, 86, 73 },  { 96, 87, 89, 78 }, { 70, 90, 86, 81 } };
	int i,j;
	printf("\t\t[0]\t\t[1]\t\t[2]\t\t[3]\t\t");
	for(i=0;i<3;i++)
	{
		printf("student[%d]",i);
		for(j=0;j<4;j++)
		{
			printf("\t%d\t",studentsgrade[i][j]);
		}
		printf("\n");
	}
	check(studentsgrade);
    average(studentsgrade);
	return 0;
}

