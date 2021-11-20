#include "bits/stdc++.h"
using namespace std;

const int MAX_NODES=1000;
int adjmatrix[MAX_NODES][MAX_NODES];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int numnodes,numedges;
	cin>>numnodes>>numedges;
	
	for(int i=0;i<numedges;i++){
		int source,dest;cin>>source>>dest;
		adjmatrix[source][dest]=1;
	}	

	return 0;
}
