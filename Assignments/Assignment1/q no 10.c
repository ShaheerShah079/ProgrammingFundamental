#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three number\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a==b)
  {
    printf("1st and 2nd value are equal");
  }
  else if(a==c)
  {
    printf("1st and 3rd value are equal");
  }
  else if(b==c)
  {
    printf("2nd and 3rd value are equal");
  }
  else
  {
  	printf("No value are equal");
  }
	return 0;
}
