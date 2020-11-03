#include<stdio.h>
int main()
{
	int y,m,d;
	printf("请输入年，月，日：");
	scanf("%d%d%d",&y,&m,&d);
	
	printf("Dated this %d",d);
	if(d==1,21,31)
	  printf("st") ;
	else if(d==2,22)
	  printf("rd");
	else if(d==3,23)
	  printf("nd");
	else
	  printf("th");


	printf("day of ");
	if(m==1)
	  printf("January");
	else if(m==2)
	  printf("February");
	else if(m==3)
	  printf("March");
	else if(m==4)
	  printf("April");
    else if(m==5)
      printf("March");
    else if(m==6)
      printf("June");
    else if(m==7)
      printf("July");
    else if(m==8)
      printf("August");
    else if(m==9)
      printf("September");
    else if(m==10)
      printf("October");
    else if(m==11)
      printf("November");
    else
      printf("December");
      
    
    printf(",%d.\n",y);
    
    int w;
    if (m==1){	
       m=13;
       y=y-1;
       w=(d+1+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
 }   else if(m==2)
	 {
	    m=14;
	    y=y-1;
       w=(d+1+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;}   
    else
       w=(d+1+2*m+3*(m+1)/5+y+(y/4)-y/100+y/400)  %  7;
  switch (w)
  {
  case 1:printf("Monday\n"); break;
  case 2:printf("Tuesday\n"); break;
  case 3:printf("Wednesday\n"); break;
  case 4:printf("Thursday\n"); break;
  case 5:printf("Friday\n"); break;
  case 6:printf("Saturday\n"); break;
  case 7:printf("Sunday\n"); break;
  }
    return 0;
    
 } 
