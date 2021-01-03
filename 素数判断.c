#include<stdio.h>
#include<stdbool.h>

bool is_prime(int n) //定义函数 
{
	int divisor;
	if(n<=1)
	 return false; 
	for (divisor=2;divisor*divisor<=n;divisor++)
	 if(n%divisor==0)
	  return false;
	 else
	  return true;
 } 
 int main(void)
 {
 	int n;
 	printf("enter a number:\n");
 	scanf("%d",&n);
 	if(is_prime(n))  //调用函数  
 	 printf("prime");
 	else
 	 printf("not prime"); 
	return 0; 
 }
