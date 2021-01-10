#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100],s2[100],s3[100];
	int k,b,i,j=0,p;
	scanf("%d",&b);
	scanf("%s",&s);
	while(b--){
		scanf("%d",&k);
	if(k==1){
		//char s1[100];
		scanf("%s",&s1);
		printf("%s\n",strcat(s,s1));
	}
	if(k==2){
		int x,y;
		scanf("%d %d",&x,&y);
		for(i=x;i<x+y;i++){
			s[j++]=s[i];
		}
		s[j]='\0';
		for(i=0;i<j;i++){
			printf("%c",s[i]);
		}
		printf("\n");
	}
	if(k==3){
		//char s2
		scanf("%d %s",&p,&s2);
		strcat(s2,&s[p]);
		s[p]='\0';
		strcat(s,s2);
		for(i=0;i<strlen(s);i++){
			printf("%c",s[i]);
		}
		printf("\n");
	}
	if(k==4){
	//	char s3[100];
		scanf("%s",s3);
		if(strstr(s,s3)==NULL){
			printf("-1\n");
		}
		else{
			printf("%d\n",strstr(s,s3)-s);
		}
	}
	}
	
}
