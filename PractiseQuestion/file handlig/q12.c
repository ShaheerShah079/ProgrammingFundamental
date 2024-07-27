#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr,*ptr1,*ptr2;
	ptr=fopen("practise1.txt","r");
	ptr1=fopen("practise4out.txt","r");
	ptr2=fopen("practisemerge.txt","w");
	char name[50],name1[50],name2[50];
	fgets(name,50,ptr);
	fgets(name1,50,ptr1);
	fputs(name,ptr2);
	fputs("\n",ptr2);
	fputs(name1,ptr2);
	
	fclose(ptr); 
    fclose(ptr1);
    fclose(ptr2);
	return 0;
}
