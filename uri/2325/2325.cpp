#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,inp,inv;cin>>n>>m;
	map<int,int> p, a;

	while(n--){
		cin>>inp>>inv;
		if(p[inp]<=inv) p[inp]=inv;
	}

	while(m--){
		cin>>inp>>inv;
		if(p[inp]<inv&&a[inp]<inv)a[inp]=inv;
	}

	for(map<int,int>::iterator it=a.begin(); it!=a.end(); it++){
		cout<<it->first<<" "<<it->second<<endl;
	}

	return 0;
}