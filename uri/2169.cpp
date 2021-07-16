#include "bits/stdc++.h"

using namespace std;

int knapsack(int cap,vector<int> &w,vector<int> &v){
	int n=w.size();int dp[n+1][cap+1];
	memset(dp,0,sizeof(dp));

	for(int i=1;i<=n;i++){
		int p=w[i-1],g=v[i-1];
		for(int sz=1;sz<=cap;sz++){
			dp[i][sz]=dp[i-1][sz];
			if(sz<p)continue;
			dp[i][sz]=max(dp[i][sz],dp[i-1][sz-p]+g);
		}
	}
	return dp[n][cap];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<string,double> arms={
		{"HANDGUN",2},
		{"RED9",3.5},
		{"BLACKTAIL",3.5},
		{"MATILDA",2},
		{"HANDCANNON",60},
		{"STRIKER",12},
		{"TMP",1.2},
		{"RIFLE",12},
	};	

	map<string,int> mons={
		{"GANADOS",50},
		{"COBRAS",40},
		{"ZEALOT",75},
		{"COLMILLOS",60},
		{"GARRADOR",125},
		{"LASPLAGAS",100},
		{"GATLINGMAN",150},
		{"REGENERATOR",250},
		{"ELGIGANTE",500},
		{"DR.SALVADOR",350},
	};

	int na,nm,wi,vi,c,m;string name;vector<int> w,v;
	while(cin>>na){
		while(na--){
			cin>>name>>wi;
			vi=arms[name]*wi;
			w.push_back(wi);
			v.push_back(vi);
		}
		m=0;cin>>nm;
		while(nm--){
			cin>>name>>wi;
			m+=mons[name]*wi;
		}
		cin>>c;
		if(knapsack(c,w,v)-m>0)cout<<"Missao completada com sucesso\n\n";
		else cout<<"You Are Dead\n\n";
		//cout<<c<<' '<<m<<"\n";
		w.clear();v.clear();
	}	

	return 0;
}