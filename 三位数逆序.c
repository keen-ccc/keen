#include <stdio.h>
int main() 
{
	int a,b,c,d,e;
	printf("请输入一个三位数：");
	scanf("%d",&a);
	b = a /100;
	d = a %10;
	c = (a/10)%10;
	e = d*100+c*10+b;
	printf("该三位数的逆序是%d",e);
	return 0; 
}
