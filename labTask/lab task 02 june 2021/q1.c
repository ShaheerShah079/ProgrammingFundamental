#include<stdio.h>
#include<string.h>
char mycmp(char aray1[20],char aray2[20])
{
	int ans=0;
	int i;
	for(i=0;aray1[i]!='\0';i++)
	{
		ans+=(aray1[i]-aray2[i]);
		if(ans!=0)
		{
			break;
		}
	}
	return ans;
}
int main()
{
	char name1[20];
	char name2[20];
	printf("Enter string 1\n");
	gets(name1);
	printf("Enter string 2\n");
	gets(name2);
	if(mycmp(name1,name2)==0)
	{
		printf("Enter string are same\n");
	}
	else if(mycmp(name1,name2)>=1)
	{
		printf("String 1 is greater then String 2\n");
	} 
    else if(mycmp(name1,name2)<=-1)
	{
		printf("String 2 is greater then String 1\n");
	} 
	
	return 0;
}





