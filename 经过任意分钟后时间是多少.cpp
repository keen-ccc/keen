#include <stdio.h>

int main()
{
	int time;
	int minute2;
	
	printf("������time/��λ���֣�");
	scanf("%d",&time);
	printf("�����뾭���ķ�������");
	scanf("%d",&minute2);
	
	int hour1 = time/100; //�����Сʱ ����ȡ�� 
	int minute1 = time%100; //��������� ȡ�� 
	int time1 = hour1*60 + minute1;
	int time2 = time1 + minute2;
	
	printf("����%d���Ӻ�ʱ��Ϊ%dʱ%d��",minute2,time2/60,time2%60);
	
	return 0;
}
