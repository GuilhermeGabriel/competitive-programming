#include <bits/stdc++.h>

using namespace std;

vector<int> vert[10];
int components[7];

void bfs(int v){
	queue<int> fila;
	fila.push(v);
	components[v]=v;

	while(!fila.empty()){
		int v=fila.front();
		fila.pop();

		for(int x: vert[v]){
			if(components[x]==-1){
				cout<<x;
				components[x]=1;
				fila.push(x);
			}
		}
	}
}

int main(){
	for(int i=1;i<=6;i++)components[i]=-1;

	vert[1].push_back(2);
	vert[1].push_back(3);
	vert[1].push_back(6);
	
	vert[2].push_back(1);
	vert[2].push_back(3);
	
	vert[3].push_back(1);
	vert[3].push_back(2);
	vert[3].push_back(4);
	
	vert[4].push_back(3);

	cout<<1;
	bfs(1);

	return 0;
}