#include<stdio.h>
int main()
{
    int a,low,up;
    printf("Enter a charcter to check weather its is Vowel or constant\t");
	scanf("%c",&a);
switch(a)
{
	case 'a':
	case'A':
	case 'e':
	case'E':
	case 'i':
	case'I':
	case 'o':
	case'O':
	case 'u':
	case'U':	
	printf("You entered a vowel word\n");
	break;
	default :
    printf("You entered a constant word\n");
}
	return 0;
}
