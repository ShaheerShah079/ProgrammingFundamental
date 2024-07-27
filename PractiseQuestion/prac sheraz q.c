#include<stdio.h>
int main()
{
	char c;
	int count=0;
	scanf("%c",&c);
	printf("The chracters from %c to Z is:\n",c);
for(;(c<='z'||c<='Z');c++)
{
	printf("%c , ",c);
	count++;
}
 printf("\nTotal number of chracter print is %d",count);
	return 0;
}
