#include <bits/stdc++.h>

using namespace std;

void dijkstra(int v){
	for(int i=0;i<n;i++)dist[i]=-1;
	
	set<pair<int,int>> fila;
	fila.insert({0,v});
	pair<int,int> aux;

	while(!fila.empty()){
		aux=*fila.begin();
		fila.erase(fila.begin());

		int vec=aux.second;
		int distv=aux.first;
	}

}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	

	return 0;
}