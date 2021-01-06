#include<stdio.h>
int main()
{
	int a,b,c,d;
	int n,m;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	n=a*60+b;
	m=c*60+d;
	printf("%d %d",(m-n)/60,(m-n)%60);
 } 
