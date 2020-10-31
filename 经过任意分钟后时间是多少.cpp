#include <stdio.h>

int main()
{
	int time;
	int minute2;
	
	printf("请输入time/四位数字：");
	scanf("%d",&time);
	printf("请输入经过的分钟数：");
	scanf("%d",&minute2);
	
	int hour1 = time/100; //分离出小时 向下取整 
	int minute1 = time%100; //分离出分钟 取余 
	int time1 = hour1*60 + minute1;
	int time2 = time1 + minute2;
	
	printf("经过%d分钟后时间为%d时%d分",minute2,time2/60,time2%60);
	
	return 0;
}
