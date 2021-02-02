#include <bits/stdc++.h>

using namespace std;

int pai[100001], peso[100001];

int find(int x){
	if(pai[x]==x)return x;
	return pai[x]=find(pai[x]);
}

void join(int x, int y){
	x=find(x);
	y=find(y);

	if(x==y)return;
	if(peso[x]>peso[y])pai[y]=x;
	if(peso[x]<peso[y])pai[x]=y;
	if(peso[x]==peso[y]){
		pai[x]=y;
		peso[y]++;
	}
}

int main(){
	int n,k;cin>>n>>k;
	for(int i=1;i<=n;i++)pai[i]=i;
	
	char op;
	int b1,b2;
	while(k--){
		cin>>op>>b1>>b2;
		if(op=='F'){
			join(b1, b2);
		}else{
			if(find(b1)==find(b2))cout<<"S\n";
			else cout<<"N\n";
		}
	}

	return 0;
}

