#include <stdio.h>

int main()
{
	int time;
	
	printf("请输入time/四位数字：");
	scanf("%d",&time);
	
	int hour1 = time/100;
	int minute1 = time%100;
	int time1 = hour1*60 + minute1;
	int time2 = time1 + 110;
	
	printf("经过110分钟后时间为%d时%d分",time2/60,time2%60);
	
	return 0;
}
