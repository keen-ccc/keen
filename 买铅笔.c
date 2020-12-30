#include<stdio.h>
int main()
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	scanf("%d %d",&e,&f);
	int x,y,z;
	if(n%a!=0) {
	   x=n/a+1;
	}
	else x=n/a;
	if(n%c!=0){
		y=n/c+1;
	}
	else y=n/c;
	if(n%e!=0){
		z=n/e+1;
	}
	else z=n/e;
	
	if(x*b<=y*d&&x*b<=z*f){
		printf("%d",x*b);
	}
	else if(y*d<=x*b&&y*d<=z*f){
		printf("%d",y*d);
	}
	else
	printf("%d",z*f);
}
