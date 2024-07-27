#include<stdio.h>
#include<string.h>
int main()
{ 
   char name1[20];
   printf("Enter string 1\n");
   gets(name1);
   char name2[20];
   printf("Enter string 2\n");
   gets(name2);
   strcat(name1,name2);
   
   printf("Concatination of these two string is %s",name1);
	
	return 0;
}
