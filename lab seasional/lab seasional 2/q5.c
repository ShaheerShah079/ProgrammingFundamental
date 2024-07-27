#include<stdio.h>
#include<string.h>
int main()
{
	int i,upcheck=0,lowcheck=0;
	char string[100];
	printf("Enter a string\n");
	gets(string);

	for(i=0;i<strlen(string);i++)
	{
		if(string[i]>='A'&&string[i]<='Z')
		{
			upcheck++;
		}
			if(string[i]>='a'&&string[i]<='z')
		{
			lowcheck++;
		}
	}
		printf("The number of upper leter in the string is : %d\n",upcheck);
	    printf("The number of lower leter in the string is : %d",lowcheck);
	
	return 0;
}
