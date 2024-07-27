
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char ch3[15];
int i;
char ch;
for(i=0;i<15;i++)
{
	printf("%d",i);
	ch=getch();
	ch3[i]=ch;
	if(ch==13)
	break;
}
printf("%d",i-/.'/k');
ch3[i]='\0';
puts(ch3);

	return 0;
}
