#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
    char s[15];
	ptr=fopen("mytextq1.txt","w");
printf("Enter Data to store them in text file\n");
	gets(s);
    fputs(s,ptr);
	fclose(ptr);
	return 0;
}
