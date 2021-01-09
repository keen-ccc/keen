//找出单词中出现最少的字母和出现最多的字母
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int len,num=0,p=0,a[100],i,j,max; 
	scanf("%s",&s);
	len=strlen(s);
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			if(s[j]==s[i]){
				num+=1; 
			}
		}
		a[p++]=num;
		num=0;
	}
	for(i=0;i<p;i++){
		for(j=0;j<p-1-i;j++)
		if(a[j]>a[j+1]){
			max=a[j];
			a[j]=a[j+1];
			a[j+1]=max;
		}
	}
		
	
	if((a[p-1]-a[0])==2){
		printf("Lucky Word\n");
		printf("2");
	}
	
	else{
		for(i=2;i<(a[p-1]-a[0]);i++){
		if((a[p-1]-a[0])%i==0)	
		break;
	}
	if(i==(a[p-1]-a[0])){
		printf("Lucky Word\n");
		printf("%d",(a[p-1]-a[0]));
	}
	else {
		printf("No Answer\n");
	printf("0");
	}
	
	}
	
 } 
