#include<stdio.h>
int main()
{
	/*                            METHOD 1 integer 
	int i,j,arr[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	in integer array we use ampersedence sign in scanf */
	
	/*                              METHOD 2 char  understand scan and print method
	char i,arr[10];
	for(i=0;i<10;i++)
	{
		scanf("%c",&arr[i]);
	}
  for(i=0;i<10;i++)
	{
		printf("%c\t",arr[i]);
	}
		this expresion also work if we enter space     */
	
	/*                              METHOD 3 char  understand scan and print method
	char i,arr[10];
		scanf("%s",arr);
		printf("%s\t",arr);
	}
	we can use this method also %s to store all in one we dont use & sign here */
	
	 /*          method 4 null character 
	char arr[15];
	scanf("%s",arr);
	printf("%s",arr);
	if we scan "harry code" then its only write "harry" and terminate after space char.    */
	
	/*      method 4 imp point 
	char arr[]="harry code"
	printf("%s",arr);
	now this print full "harry code" statement .
	*/
	//     imp point 
	char arr[10];
	int i;
	for (i=0;i<10;i++)
	{
	scanf("%c",&arr[i]);	
	}
	for (i=0;i<10;i++)
	{
	printf("%c",arr[i]);	
	}
	//if we scan harry code here its print harry code complete
	

	
	
	 
	
	return 0;
}
