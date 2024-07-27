#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
	ptr=fopen("practise4.txt","a");
	int ln,i;
	char name[50];
	scanf("%d%d",&ln);
	for(i=0;i<ln;i++)
	{
		gets(name);
		fputs(name,ptr);
		fputs("\n",ptr);
	}
	return 0;
}
