#include<stdio.h>
int max(int *ptr, int size)
{
	static int ans=0;
	static int maxi=0;
	if(*(ptr+ans)>maxi)
	{
		maxi=*(ptr+ans);
	}
	if(ans==size)
	{
		return maxi; 
	}
		ans++;
		max((ptr),size);
}
int main()
{
	printf("Enter number to store in aray and -1 to stop storing\n");
	int aray[100],i,check;
	for(i=0;i<100;i++)
	{
		printf("Enter %d index number  ",i);
		scanf("%d",&check);
		if(check==-1)
		{
			i--;
			break;
		}
		else
		{
		aray[i]=check;
		printf("\n");
	}
	}
	int result=max(aray,i);
	printf("Largest element in arary is %d",result);
	return 0;
}
