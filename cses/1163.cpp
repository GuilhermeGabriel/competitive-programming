#include "bits/stdc++.h"
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int l,q,in;cin>>l>>q;

	set<int> streets;
	streets.insert({0,l});

	int ant,atual,next;
	unordered_map<int,int> dist={{0,l}};
	multiset<int> dists_l={{l}};

	/*
	10 5

	0 1 10

	1 2 3 4 5
	*/

	while(q--){
		cin>>in;
		auto e = streets.insert(in);
		
		ant=*(--e.first);
		atual=*(++e.first);
		next=*(++e.first);

		// dists_l.erase(dist[ant]);
		auto it=dists_l.find(dist[ant]);
		if(it!=dists_l.end())dists_l.erase(it);

		dist[ant]=atual-ant; dists_l.insert(atual-ant);
		dist[atual]=next-atual; dists_l.insert(next-atual);
		
		// for(auto e:dists_l)cout<<e<<' ';
		// cout<<'\n';
		cout<<*(--dists_l.end())<<' ';
	}
	cout<<'\n';

	// for(auto e:streets)cout<<e<<'\n';

	return 0;	
}