#include<stdio.h>
int main()
{
	int x;
	printf("������һ��С��1000��������");
    scanf("%d",&x);
    if(x<=0){
      printf("���������룺");
	  scanf("%d",&x); 
}
    int y;
    y=sqrt(x);
    printf("���������%d",y);
    return 0;
 } 
