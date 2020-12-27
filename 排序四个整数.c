//排序四个整数 
#include <stdio.h>

int main() {

    int n, i,j,y,t;
	int a[4];

    scanf("%d", &n);  // 有n组数据

    for (i = 0; i < n; i++) {
        
		scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
		for(j=0;j<4;j++){//j<4(4为元素个数)
			for(y=0;y<3-j;y++){//y<3-j(注意是3-j) 
				if(a[y]>a[y+1]){
					t=a[y];
					a[y]=a[y+1];
					a[y+1]=t;
				}
			}
		}
		printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]); 

 

        // 读入4个整数，对这4个整数排序，并输出结果

        // 请将排序代码写在这里，不能使用循环语句



   } 

    return 0;

}
