#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
    char s[15];
	ptr=fopen("D:\\shaheer\\Comsat\\changelocation.txt","w");
	if(ptr==NULL)
	{
		printf("no data");
	}
	printf("Enter Data to store them in text file\n");
	gets(s);
	fputs(s,ptr);
    fclose(ptr);
	return 0;
}
