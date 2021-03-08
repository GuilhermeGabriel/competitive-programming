#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,l;cin>>n>>l;
	int att[n+1];

	priority_queue<pair<int, int>> fila;
	
	for(int i=1;i<=n;i++)att[i]=0;
	for(int i=1;i<=n;i++)fila.push(make_pair(0,-i)); 

	while(l--){
		int t;cin>>t;
		int id=-fila.top().second;
		int livre=-fila.top().first;
		att[id]++;
		fila.pop();
		fila.push(make_pair(-(livre+t),-id));
	}

	for(int i=1;i<=n;i++)cout<<i<<" "<<att[i]<<"\n";

	return 0;
}
