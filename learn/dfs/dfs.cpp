#include <bits/stdc++.h>

using namespace std;

vector<int> vert[10];
int componente[7];

void DFS(int v){
	for(int x: vert[v]){
		if(componente[x]!=-1)continue;
		
		cout<<x;
		componente[x] = 1;
		DFS(x);
	}
}

int main(){
	for(int i=1;i<=6;i++)componente[i]=-1;

	vert[1].push_back(2);
	vert[1].push_back(3);
	vert[1].push_back(6);
	
	vert[2].push_back(1);
	vert[2].push_back(3);
	
	vert[3].push_back(1);
	vert[3].push_back(2);
	vert[3].push_back(4);
	
	vert[4].push_back(3);

	componente[1]=1;
	cout<<1;
	DFS(1);

	return 0;
}