#include<stdio.h>
#include<string.h>
char mycat(char array1[20],char array2[20] )
{
	int i,k=0;
	for(i=strlen(array1);i<(strlen(array1)+strlen(array2)-1);i++)
	{
		array1[i]=array2[k];
		k++;
	}
	
}
int main()
{ 
   char name1[20];
   printf("Enter string 1\n");
   gets(name1);
   char name2[20];
   printf("Enter string 2\n");
   gets(name2);
   mycat(name1,name2);
   
   printf("Concatination of these two string is %s",name1);
	
	return 0;
}
