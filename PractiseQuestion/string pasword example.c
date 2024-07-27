#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char nam[100],ch;
	int j,i,ccap=0,cnum=0,csmal=0,csym=0;
	printf("Enter a password\nPassword must contain a capital leter , a small leter, a number and a symbol\n");
	ss:
		if(ccap>0||csmal>0||cnum>0||csym>0)
{
		printf("Enter a password again\nPassword must contain a capital leter , a small leter, a number and a symbol\n");
}
	ch=0;
    for(j=0;j<100;j++)
    {
    	ch=getch();
    	nam[j]=ch;
    	if(ch!=13)
    	{
    	    printf("*");	
		}
    	else 
    	{
            break;
		}
	}
	nam[j]='\0';
	printf("\n");
	printf("Your password is %s\n\n",nam);
	ccap=0,cnum=0,csmal=0,csym=0;
	for(i=0;nam[i]!='\0';i++)
	{

	if(nam[i]>='A'&&nam[i]<='Z')
	{
		ccap++;
	}
	if(nam[i]>='a'&&nam[i]<='z')
	{
		csmal++;
	}
    if(nam[i]>='0'&&nam[i]<='9')
	{
		cnum++;
	}
	if((nam[i]>='!'&&nam[i]<='/')||(nam[i]>=':'&&nam[i]<='@')||(nam[i]>='['&&nam[i]<='_'))
	{
		csym++;
	}
}
if(ccap==0||csmal==0||cnum==0||csym==0)
{

	if(ccap==0)
	{
		printf("\nPassword must contain a capital leter\n");
	}
	if(csmal==0)
	{
		printf("Password must contain a small leter\n");
	}
	if(cnum==0)
	{
		printf("Password must contain a number\n");
	}
	if(csym==0)
	{
		printf("Password must contain a symbol\n\n\n");
	}
	goto ss;
}
else
{
	printf("Password saved thank u");
}
	return 0;
}
