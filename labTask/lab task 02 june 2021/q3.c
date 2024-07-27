#include<stdio.h>
#include<string.h>
int main()
{ 
   char name1[20];
   printf("Enter a string\n");
   gets(name1);
   strrev(name1);
   printf("The reverse string is %s",name1);
   
	
	return 0;
}
