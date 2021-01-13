//数组中值的逆转
#include<stdio.h>
void invert(int *s,int num){
	int *t,k;
	t=s+num;
	while(s<t){
		k=*s;
		*s=*t;
		*t=k;
		s++;t--;
	}
}
int main()
{
	int i;
	int a[10];
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	invert(a,9);
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
 } 
