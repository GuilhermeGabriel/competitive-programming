#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m, res=0; cin>>n>>m;
	int ta[10001];

	for(int i=1;i<=n;i++)cin>>ta[i];

	priority_queue<pair<int,int>> fila;

	for(int i=1;i<=n;i++)fila.push(make_pair(0,-i));

	while(m--){
		int q;cin>>q;
		int id=-fila.top().second;
		int l=-fila.top().first;
		fila.pop();
		fila.push(make_pair(-(l+ta[id]*q),-id));
		res=max(res, l+ta[id]*q);
	}
	cout<<res<<"\n";

	return 0;
}