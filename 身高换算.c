#include <stdio.h>

int main()
{
	printf("��ֱ�����Ӣ�ߺ�Ӣ�磬��������5 7��ʾ��Ӣ����Ӣ�� ��");
	
	double foot;
	double inch;
	
	scanf("%lf %lf",&foot,&inch);
	
	float height = (foot + inch/12) * 0.3048;
	
	printf("height=%.2f",height);
	
	return 0; 
}
