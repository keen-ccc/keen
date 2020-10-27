#include <stdio.h>

int main()
{
	printf("请分别输入英尺和英寸，“如输入5 7表示五英尺七英寸 ”");
	
	double foot;
	double inch;
	
	scanf("%lf %lf",&foot,&inch);
	
	float height = (foot + inch/12) * 0.3048;
	
	printf("height=%.2f",height);
	
	return 0; 
}
