#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr,*ptr1,*ptr2,*ptr3;
    char s[15],s1[15],s2[15];
	ptr=fopen("mytextq5.txt","w");
	printf("Enter sting to store them in mytextq5\n");
	gets(s);
	fputs(s,ptr);
    fclose(ptr);
    //read the writing string in mytextq5
    ptr1=fopen("mytextq5.txt","r");
    fgets(s1,(strlen(s)+1),ptr1);
	fclose(ptr1);
	
	ptr2=fopen("mytextq5out.txt","w");
	fputs(s1,ptr2);
	fclose(ptr2);
	
	ptr3=fopen("mytextq5out.txt","r");
	printf("The string store in mytextq5out is \n");
	fgets(s2,(strlen(s1)+1),ptr3);
	printf("%s",s2);
	fclose(ptr3);
	
	return 0;
}
