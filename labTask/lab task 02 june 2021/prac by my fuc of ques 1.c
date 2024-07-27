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
	printf("my compare is %d",mycmp(name1,name2));
	return 0;
}
