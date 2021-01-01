#include<stdio.h>
int  main(){
	char a[13];
	int i,sum=0,j;//没有初始化导致错误 
	int num=0; 
	int k=1; 
	for(i=0;i<13;i++){
		scanf("%c",&a[i]);
		if(a[i]!='-'&&i!=12){
			sum=sum+(a[i]-'0')*k;k++;
		}
	}
	j=sum%11;
	
	if(a[12]=='X'&&j==10){
	 printf("Right");}
	
	else if(j==a[12]-'0')
	 printf("Right"); 
	else{ 
	  if(j==10){
	  	for(i=0;i<12;i++){ 
	  	printf("%c",a[i]);}
		printf("X"); 
	  }
	  else{
	  	for(i=0;i<12;i++){
	  		printf("%c",a[i]);
		  }
		  printf("%d",j); 
	  }
	  }
	  return 0;
	
}
