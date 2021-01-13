    void StraightSort(int *arr,int len)
    {
    	int tmp;
    	int i;
    	int j;
    	for (i = 1;i < len;i++)
    	{
    		tmp = arr[i];
    		for (j = i - 1;j >= 0 && arr[j] > tmp;j--)
    		{
    			arr[j + 1] = arr[j];
    		}
    		arr[j + 1] = tmp;
    	}
    }
