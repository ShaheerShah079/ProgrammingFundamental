#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
    char s[15];
	ptr=fopen("mytext.txt","w");
	gets(s);
    fputs(s,ptr);
	fclose(ptr);
	return 0;
}
