#include<stdio.h>
int main()
{
	char arr11[21];
	int i,j,k=11;
	for(i=0;i<11;i++)
	{
		scanf("%c",&arr11[i]);
	}
	for(i=0;i<10;i++){
	arr11[k]=arr11[i];
	k++;
	if(k==20)
	{
		break;
	}}
	printf("%c",arr11[3]);
	
	return 0;
}
