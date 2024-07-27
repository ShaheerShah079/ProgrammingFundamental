#include <stdio.h>
int main()
{
  int n, c, k,x=1;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (k = 1; k <= n; k++)
  {
   for (c = n-1; c >= k; c--)
      printf(" "); 

    for (c = 1; c <= 2*k-1; c++)
    {
    if(c%2==1)
      printf("*");
	else
	printf(".");
	}  
    printf("\n");
  }
 
  for (k = n-1; k >= 1; k--)
  {
    for (c = n-1; c >=k; c--){
      printf(" ");
 }	 
 
    for (c = 1 ; c <= 2*(k)-1; c++)
    {
    if(c%2==1)
      printf("*");
	else
	printf(".");
	}       
    printf("\n");
  }

  return 0;
}
