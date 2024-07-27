#include<stdio.h>
int main()
{
	int i,j,n[2][4]={{2,4,4,4},{5,8,2,6}};
/*for (i=0;i<2;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%d",n[i][j]);
	}
	printf("\n");
}   method 1*/

//int *ptr=&n[0][0];
//for(i=0;i<8;i++)
//{
//	printf("%d\t",ptr[i]);
 //}
 
 /*
 char arr[7];

	for(j=0;j<8;j++)
	{
		scanf("%c",&arr[j]);
	}

	for(j=0;j<8;j++)
	{
		printf("%c",arr[j]);
	}
*/
 
  char x[]="shaheer";
  int k=0;
  while(k!='\0')
  {
  	printf("%c",x[k]);
  	k++;
  }
	return 0;
}
