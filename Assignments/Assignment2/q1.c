#include<stdio.h>
int main()
{
	int num1,check,i,j,k=0,l=0,m,n;
	unsigned int arr1[100],arrodd[100],arreven[100];
	printf("Enter number that store in array and -1 to stop processing\n");
	for(i=0;i<=100;i++)
	{
		scanf("%d",&num1);
		if(num1==-1)
		{
			check=i;
			break;
		}
		arr1[i]=num1;
		
	}
	for(j=0;j<check;j++)
	{
		if(arr1[j]%2==0)
		{
		arreven[k]=arr1[j];	
			k++;
		}
		else 
		{
				arrodd[l]=arr1[j];
			l++;
		}
	}
	printf("The even number you entered are at\n");
	for(m=0;m<
	k;m++)
	{
		printf("index %d and num is %d\n",m,arreven[m]);
	}
	printf("The odd number you entered are at\n");
	for(n=0;n<l;n++)
	{
		printf("index %d and num is %d\n",n,arrodd[n]);
	}

	return 0;
}
