//分解质因式
#include<stdio.h>
int main()
{
	int k,i,a,j=2,b[100],p=0,y;
	scanf("%d",&k);
	for(i=0;i<k;i++){
	 scanf("%d",&a);
	 while(a>=j){
	 	if(a%j==0){
	 		b[p]=j;
	 		a/=j;
	 		j=2;
	 		p++;
		 }
		 else
		 j++;
	 }
	 
	 if(p==1){
	 	printf("%d",b[0]);
	 	printf("\n");
	 }
	 else{
	 	for(y=0;y<p-1;y++){
	 		printf("%d*",b[y]);
		 }
	    printf("%d",b[p-1]);
	    printf("\n");
	 }
	 p=0;

	}
	return 0;
}
