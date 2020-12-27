//水仙花数 
#include<stdio.h>
int main()
{
	int n,i,j,a,b,num1=0,num2=0,num3=0,k=0,m[999],p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		for(j=a;j<=b;j++){
			num1=j%100;
			k=num1%10;//个位 
			num2=num1/10;//十位 
			num3=j/100;//百位
			if(k*k*k+num2*num2*num2+num3*num3*num3==j){
			   m[p]=j;
			   p++;
		}
		}
		if(p==0)
		 printf("-1\n");
        else 
        for(i=0;i<p;i++){
			  printf("%d ",m[i]);
		//if(j==b)
		 //printf("-1");
	}
}
}
