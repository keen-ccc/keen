#include <stdio.h>

int main()
{
	int time;
	
	printf("������time/��λ���֣�");
	scanf("%d",&time);
	
	int hour1 = time/100;
	int minute1 = time%100;
	int time1 = hour1*60 + minute1;
	int time2 = time1 + 110;
	
	printf("����110���Ӻ�ʱ��Ϊ%dʱ%d��",time2/60,time2%60);
	
	return 0;
}
