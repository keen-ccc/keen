#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%2==0&&(a>4&&a<=12)){
		printf("1 ");
	}
	else printf("0 ");
	if(a%2==0||(a>4&&a<=12)){
		printf("1 ");
	} 
	else printf("0 ");
	if(a%2==0&&(a<=4||a>12)){
		printf("1 ");
	}
	else printf("0 ");
	if(a%2!=0&&(a<=4||a>12)){
		printf("1 ");
	}
	else printf("0 ");
 } 
