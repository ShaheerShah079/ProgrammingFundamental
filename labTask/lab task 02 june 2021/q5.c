#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,checkcap=0,checklow=0;
	char name1[20];
	printf("Enter a string\n");
	gets(name1);
	
	for(i=0;i<strlen(name1);i++)
	{
		for(j='A';j<='Z';j++)
		{
			if(name1[i]==j)
			{
			checkcap++;	
			}
	
		}
	}
	 printf("Number of capital leters in the string is %d\n",checkcap);
	for(i=0;i<strlen(name1);i++)
	{
		for(j='a';j<='z';j++)
		{
			if(name1[i]==j)
			{
		checklow++;		
			}
		
		}
	}
	printf("Number of small leters in the string is %d\n",checklow);
	return 0;
}
