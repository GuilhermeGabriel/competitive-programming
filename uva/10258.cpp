#include "bits/stdc++.h"

using namespace std;

struct Contestant{
	int id,t;
	set<int> pro;
	map<int,int> pt;
};

bool order(Contestant a, Contestant b){
	if(a.pro.size()!=b.pro.size())
		return a.pro.size()>b.pro.size();
	if(a.t!=b.t)return a.t<b.t;
	return a.id<b.id;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	map<int,Contestant> conts;
	Contestant aux;
	int n,s=0,fr;cin>>n;
	int id,p,t;char r;

	string in;
	while(n--){
		while(getline(cin,in)){
			if(in.empty()){n++;break;}

			istringstream tmp(in);
			while(tmp>>id>>p>>t>>r){
				conts[id].id=id;
				if(r=='C'&&conts[id].pro.count(p)==0){
					conts[id].pro.insert(p);
					conts[id].t+=conts[id].pt[p]+t;
				}
				else if(r=='I'){
					conts[id].pt[p]+=20;
				}
			}
		}

		vector<Contestant> el;
		for(auto e:conts){
			el.push_back(e.second);
		}
		sort(el.begin(),el.end(),order);
		if(el.size()>0&&s)cout<<'\n';
		for(int i=0;i<el.size();i++){
			//if(i==0){cout<<'\n';}
			Contestant e=el[i];
			cout<<e.id<<' '<<e.pro.size()<<' '<<e.t<<'\n';
			s=1;
		}
		conts.clear();el.clear();
	}
	
	return 0;
}
