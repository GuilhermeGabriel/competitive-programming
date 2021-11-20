#include "bits/stdc++.h"

using namespace std;

const int MAXN=1e5;
vector<int> edges[MAXN];
int vis[MAXN];

void dfs(int cur){
	vis[cur]=1;
	for(int i=0;i<edges[cur].size();i++){
		int i_neigh=edges[cur][i];
		if(!vis[i_neigh])dfs(i_neigh);
	}
	vis[cur]=2;
	cout<<"concluiu o: "<<cur<<'\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N,M;cin>>N>>M;
	for(int i=0;i<M;i++){
		int f,t;cin>>f>>t;
		edges[f].push_back(t);
		edges[t].push_back(f);
	}
	//O(n+m)
	//dfs(3);

	//O(n+m)
	for(int i=1;i<=N;i++){
		if(!vis[i])dfs(i);
	}

	return 0;
}
