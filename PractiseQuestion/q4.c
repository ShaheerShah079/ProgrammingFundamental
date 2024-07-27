#include<stdio.h>
#include<string.h>

int main()
{
	FILE *ptr;
    int a[4];
    int s[100];
	ptr=fopen("practise4.txt","r");
	
	fgets(s,100,ptr);
	printf("%s",s);		
		fgets(s,100,ptr);
	printf("%s",s);
	fclose(ptr); 
		
	  
	return 0;
}
