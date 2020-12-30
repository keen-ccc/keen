#include<stdio.h>
int main()
{
	int a,b,c,num1=0,num2=0;
	int max=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a){
		printf("Not triangle");
	}
	else{
		if(a>b&&a>c){
		 max=a;
		 num1=b;num2=c;
		}
		 
		else if(b>a&&b>c){
		 max=b;
		 num1=a;num2=c;
		}
		 
	    else if(c>a&&c>b){
		 max=c;
	     num1=a;num2=b;
		}
	    else if(a==b&&a==c){
	    	max=a;num1=a;num2=a;
		}
	
		if(max*max==num1*num1+num2*num2){
		  printf("Right triangle\n");
		  if(num1==num2){
		  	printf("Isosceles triangle\n");
		  }
		}
			
		else if(max*max<num1*num1+num2*num2){
			printf("Acute triangle\n");
			if(num1==num2){
		  	printf("Isosceles triangle\n");
		  	if(max==num1&&max==num2){
		  		printf("Equilateral triangle\n");
			  }
		  }
		}
		else if(max*max>num1*num1+num2*num2){
			printf("Obtuse triangle\n");
			if(num1==num2){
		  	printf("Isosceles triangle\n");
		  }
		}
		}
	
	
	
}
