#include<stdio.h>
int main()
{
	int i,j,k,d,x,y;
	scanf("%d",&d);
    int aray[d][d];
	x=d+1;
	y=d-1;
	for(i=0;i<=x;i++)
	{ 
		scanf("%c",&aray[0][i]);
		for(k=0;k<=y;k++){
		aray[k+1][i]=aray[k][i];
		
	}
		}
	
printf("\n");
	for(j=0;j<=y;j++){
	for(i=0;i<=x;i++){
    //if(j==0||j==y||i==0||i==y){
	printf("%c",aray[j][i]);
//}
//else printf(" ");
	}
	//printf("\n");
	}
		return 0;
}
