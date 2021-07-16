#include "bits/stdc++.h"

using namespace std;

vector<double> precos,memo(2005,0);
//set<double> memo;
/*
double minprecos(double x,vector<double> r){
	if(x<0)return 1e9;
	//cout<<x-0<<'\n';
	if(x<0.1){
		if(r.size()==4){
			for(auto e:r)cout<<e<<' ';
			cout<<'\n';
		}
		return 0;
	}
	int a=(int)x*100;
	
	if(memo[a]>0)return memo[a];

	double best=1e9;
	for(auto p:precos){
		r.push_back(p);
		best=min(best,minprecos(x-p,r)+1);
		r.pop_back();
	}
	//memo.insert(best);
	memo[a]=best;
	return best;
}*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	/*
	precos.push_back(0.1);
	precos.push_back(0.3);
	precos.push_back(0.4);*/

	/*
	for(double m=0.01;m<=20.01;m+=0.01){
		precos.push_back(m);
	}*/

	//cout<<minprecos(0.6,{});
	//minprecos(20.00,{});

	//for(auto i:memo)cout<<i<<'\n';
	//for(auto m:precos)cout<<m<<'\n';

	return 0;
}