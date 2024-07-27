#include<stdio.h>
int main()
{
char aray[100];
int i,check,ca=0,j,a='a',b='A';
for(i=0;i<100;i++)
{
	scanf("%c",&aray[i]);
	if (aray[i]=='1')
	{
		check=(i-1);
		break;
	}
}
for(j='a';j<='z';j++)
{
 for(i=0;i<check;i++)
 {
 	if(aray[i]==a||aray[i]==b)
 	{
 		ca++;
	 }
	 
 }
 if(ca>0)
	 {
	 	printf("%c is %d\n",b,ca);
	 }
	 ca=0;
	 a++;
	 b++;
	 
}

	return 0;
}
