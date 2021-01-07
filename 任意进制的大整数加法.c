//任意进制的大整数加法 
#include<stdio.h>
#include<string.h>
int main()
{
	int n,b,i,j;
	int x[200],y[200],c[200]={0};
	char m[200],a[200],M[200],A[200];
	scanf("%d",&n);
	scanf("%s",&m);
	b=strlen(m);
	for(i=b-1,j=0;i>=0,j<b;i--,j++){
		a[j]=m[i];
	}
	for(i=0,j=b-1;i<b,j>=0;i++,j--){
		M[i]=m[j];
		A[i]=a[j];
	}//逆序 
	for(i=0;i<b;i++){
		x[i]=M[i]-'0';
		y[i]=A[i]-'0';
	}//将每位字符变成数字 
	for(i=0;i<b;i++){
		c[i]+=(x[i]+y[i]);
		if(c[i]>=n){
			c[i]=c[i]%n;
			c[i+1]++;
		} 
	}
	if(c[b]!=0)
	printf("%d",c[b]);
	for(i=b-1;i>=0;i--){
		printf("%d",c[i]);
	}
	
}
