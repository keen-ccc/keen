#include<stdio.h>
#include<string.h>
#include <stdlib.h> 
int  main(){
	int k,j,i;
	char a[20];
	scanf("%d",&k);
	while(k--){
		scanf("%s",&a);
		printf("%d:\n",atoi(a));
		for(j=1;j<=7;j++){
			if(j==1){
				for(i=0;i<strlen(a);i++){
			    switch(a[i]){
				case '0':printf("*****  ");break;
				case '1':printf("    *  ");break;
				case '2':printf("*****  ");break;
				case '3':printf("*****  ");break;
				case '4':printf("*   *  ");break;
			    case '5':printf("*****  ");break;
			    case '6':printf("*****  ");break;
			    case '7':printf("*****  ");break;
			    case '8':printf("*****  ");break;
			    case '9':printf("*****  ");break;
			}
		}
		printf("\n");
			}
			if(j==2){
				for(i=0;i<strlen(a);i++){
					switch(a[i]){
				case '0':printf("*   *  ");break;
				case '1':printf("    *  ");break;
				case '2':printf("    *  ");break;
				case '3':printf("    *  ");break;
				case '4':printf("*   *  ");break;
			    case '5':printf("*      ");break;
			    case '6':printf("*      ");break;
			    case '7':printf("    *  ");break;
			    case '8':printf("*   *  ");break;
			    case '9':printf("*   *  ");break;
					}
				}
				printf("\n");
			}
			if(j==3){
				for(i=0;i<strlen(a);i++){
					switch(a[i]){
				case '0':printf("*   *  ");break;
				case '1':printf("    *  ");break;
				case '2':printf("    *  ");break;
				case '3':printf("    *  ");break;
				case '4':printf("*   *  ");break;
			    case '5':printf("*      ");break;
			    case '6':printf("*      ");break;
			    case '7':printf("    *  ");break;
			    case '8':printf("*   *  ");break;
			    case '9':printf("*   *  ");break;
					}
				}
				printf("\n");
			}
			if(j==4){
				for(i=0;i<strlen(a);i++){
					switch(a[i]){
				case '0':printf("*   *  ");break;
				case '1':printf("    *  ");break;
				case '2':printf("*****  ");break;
				case '3':printf("*****  ");break;
				case '4':printf("*****  ");break;
			    case '5':printf("*****  ");break;
			    case '6':printf("*****  ");break;
			    case '7':printf("    *  ");break;
			    case '8':printf("*****  ");break;
			    case '9':printf("*****  ");break;
					}
				}
				printf("\n");
			}
			if(j==5){
				for(i=0;i<strlen(a);i++){
					switch(a[i]){
				case '0':printf("*   *  ");break;
				case '1':printf("    *  ");break;
				case '2':printf("*      ");break;
				case '3':printf("    *  ");break;
				case '4':printf("    *  ");break;
			    case '5':printf("    *  ");break;
			    case '6':printf("*   *  ");break;
			    case '7':printf("    *  ");break;
			    case '8':printf("*   *  ");break;
			    case '9':printf("    *  ");break;
					}
				}
				printf("\n");
			}
			if(j==6){
				for(i=0;i<strlen(a);i++){
					switch(a[i]){
				case '0':printf("*   *  ");break;
				case '1':printf("    *  ");break;
				case '2':printf("*      ");break;
				case '3':printf("    *  ");break;
				case '4':printf("    *  ");break;
			    case '5':printf("    *  ");break;
			    case '6':printf("*   *  ");break;
			    case '7':printf("    *  ");break;
			    case '8':printf("*   *  ");break;
			    case '9':printf("    *  ");break;
					}
				}
				printf("\n");
			}
			if(j==7){
				for(i=0;i<strlen(a);i++){
			    switch(a[i]){
				case '0':printf("*****  ");break;
				case '1':printf("    *  ");break;
				case '2':printf("*****  ");break;
				case '3':printf("*****  ");break;
				case '4':printf("    *  ");break;
			    case '5':printf("*****  ");break;
			    case '6':printf("*****  ");break;
			    case '7':printf("    *  ");break;
			    case '8':printf("*****  ");break;
			    case '9':printf("*****  ");break;
			}
		}
		printf("\n");
			}

		
		}
		
	}
	
}
