//查找字符串
#include<stdio.h>
#include<string.h>
int main()
{
	int n,l,i,j,k=0,x;
	char str[200];
	scanf("%d",&n);
	for(x=0;x<n;x++){
	scanf("%s",&str);
	l=strlen(str);
	if(l==3){
		if(str[0]=='S'&&str[1]=='C'&&str[2]=='U')
		printf("YES\n");
		else
		printf("NO\n");
	}
	else if(l%2==0){
		printf("NO\n");
	}
	else{
		for(i=0,j=l-1;i<(l-3)/2,j>(l-3)/2+2;i++,j--){
			if(str[i]=='A'&&str[j]=='A'){
				k=1;
			}
			else
			k=-1;
		}
		if(k==1&&str[(l-3)/2]=='S'&&str[(l-3)/2+1]=='C'&&str[(l-3)/2+2]=='U'){
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
	}

 } 
