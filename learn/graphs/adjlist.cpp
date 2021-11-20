#include "bits/stdc++.h"

using namespace std;

const int MAX_NODES=1e5;
vector<int> adjlist[MAX_NODES];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int numnodes,numedges;
	cin>>numnodes>>numedges;

	for(int i=0;i<numedges;i++){
		int s,d;cin>>s>>d;
		adjlist[s].push_back(d);
	}


	return 0;
}
