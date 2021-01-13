//排序


for(i=0;i<p;i++){
	for(j=0;j<p-1-i;j++){
		if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
} 

for(i=0;i<p-1;i++){
	for(j=0;j<p-1-i;j++){
	if(a[j]>a[j+1]{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
	}

}

for(i=0;i<p;i++){
	for(j=0;j<i;j++){
		if(a[j]>a[i]){
			t=a[j];
			a[j]=a[k];
			a[k]=t;
		}
	}
}
