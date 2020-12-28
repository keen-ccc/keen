#include<bits/stdc++.h>
const int N = 1e3+1;
int x;
int odd[N],even[N],t,t1,t2;
int main(){
	scanf("%d\n",&t);
	while(t--){
		t1=t2=0;
		std::string line;
		std::getline(std::cin,line);
		std::stringstream ss(line);
		while(ss>>x){
			if(x&1) 
				odd[++t1]=x;
			else 
				even[++t2]=x;
		}
		std::sort(odd+1,odd+1+t1);
		std::sort(even+1,even+1+t2);
		for(int i=1;i<=t1;++i)
			printf("%d ",odd[i]);
		for(int i=1;i<=t2;++i)
			printf("%d ",even[i]);
		puts("");
	}
	return 0;
}
