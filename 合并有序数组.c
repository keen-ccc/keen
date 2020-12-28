#include<stdio.h>
	void merge(int* nums1, int m, int* nums2, int n) {
        int i=m-1,j=n-1;  //分别指向两个数组的最后一个数
    	int k=m+n-1;
    	while(i>=0 && j>=0)
    	{
    		if(nums1[i]>=nums2[j])
    		{
    			nums1[k--]=nums1[i];
    			i--;
    		}
    		else
    		{
    			nums1[k--]=nums2[j];
    			j--;
    		}
    	} 
    	while(j>=0)//将nums2中剩余元素复制到nums1中
    	{
    		nums1[k--]=nums2[j];
    		j--;
    	}
    }
    int main()
    {
    	int i,j,nums1[100],nums2[100],m,n;
    	scanf("%d %d",&m,&n);
    	for(i=0;i<m;i++){
    		scanf("%d",&nums1[i]);
		}
		for(j=0;j<n;j++){
			scanf("%d",&nums2[j]);
		}
    	merge(nums1,m,nums2,n);
    	for(i=0;i<m+n;i++)
    		printf("%d ",nums1[i]);
    	//system("pause");
    	return 0;
    }
