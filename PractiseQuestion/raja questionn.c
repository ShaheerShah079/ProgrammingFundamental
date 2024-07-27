#include<stdio.h>

int max(int arr[100],int check)
{
	int max,i,j;
	max=arr[0];
	for(i=0;i<check;i++)
	{
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		return max;
	}
int min(int arr[100],int check)
{
	int min,i,j;
	min=arr[0];
	for(i=0;i<check;i++)
	{
			if(min>arr[i])
			{
				min=arr[i];
			}
		}
		return min;
	}	
	
int main()
{
	int studentsgrade[100];
	int i,j,check,a;
	printf("Enter the marks tostore in aray and -1 to stop");
	for(i=0;i<100;i++)
	{
		scanf("%d",&a);
		if(a==-1)
		{
			check=i;
			break;
		}
		else
		{
		studentsgrade[i]=a;
	}
	}
	
	printf("The best marks is %d",max(studentsgrade,check));
   printf("The wrost marks is %d",min(studentsgrade,check));
	return 0;
}
