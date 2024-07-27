#include<stdio.h>
int main()
{
	int i,j,k,aray[7][7],c,d;
//	for(j=0;j<=12;j++){
	
	for(i=0;i<=8;i++)
	{ c=0;
		scanf("%c",&aray[0][i]);
		for(k=0;k<=6;k++){
		
		aray[k+1][i]=aray[k][i];
		
	}
		}
	
//}
printf("\n");
	for(j=0;j<=6;j++){
	
	for(i=0;i<=6;i++){
		
  //  if(j==0||j==6||i==0||i==6){
	
	printf("%c",aray[j][i]);
//}
//else printf(" ");

	}
	//if(j!=0)
	printf("\n");
	
	}
		return 0;
}
