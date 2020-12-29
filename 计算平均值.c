//计算平均值
#include<stdio.h>
int main()
{
	int n,a[100],i;
	float sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("%.2f",sum/n);
	
 } 
