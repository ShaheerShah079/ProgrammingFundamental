#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
   char   str[15];
   FILE *fp;
   fp=fopen("Test.txt","w");
     if(fp==NULL)
    {
	printf("Can't open Your File!");
    }

    printf("\n|-------------------------------|");
    printf("\n|      Enter File contents.     |");
    printf("\n|-------------------------------|\n\n");
   gets(str);
    fputs(str,fp);
    fputs("\n",fp);
    fclose(fp);
    fp=fopen("Test.txt","r");
    if(fp==NULL)
    {
	printf("Can't open Your File!");
	}
    printf("\n\n|-------------------------------|");
    printf("\n|\tYour File contents.\t|");
    printf("\n|-------------------------------|\n");
    while(fgets(str,99,fp)!=NULL)
   {
    puts(str);
   }
    fclose(fp);
   return 0;
}
