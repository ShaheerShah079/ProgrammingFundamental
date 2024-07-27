#include<stdio.h>
#include<string.h>
char mycopy(char array2[20],char array1[20] )
{
	int i;
	printf("Copy function that copy string 1 in string 2\n");
	for(i=0;array1[i]!='\0';i++)
	{
		array2[i]=array1[i];
	}
	
}
int main()
{
	char name1[20];
	char name2[20];
	printf("Enter string 1\n");
	gets(name1);
	mycopy(name2,name1);
	printf("String 2 is %s",name2);
	return 0;
}
