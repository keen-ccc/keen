#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个小于1000的正数：");
    scanf("%d",&x);
    if(x<=0){
      printf("请重新输入：");
	  scanf("%d",&x); 
}
    int y;
    y=sqrt(x);
    printf("开方结果是%d",y);
    return 0;
 } 
