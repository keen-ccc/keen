#include <stdio.h>
int main() 
{
	int a,b,c,d,e;
	printf("������һ����λ����");
	scanf("%d",&a);
	b = a /100;
	d = a %10;
	c = (a/10)%10;
	e = d*100+c*10+b;
	printf("����λ����������%d",e);
	return 0; 
}
