#include "bits/stdc++.h"
using namespace std;

struct L{
	int q;char l;
};

bool order(L a, L b){
	return a.q>b.q;
}

int main(){
	map<char,int> v;
	string in;cin>>in;

	for(auto e:in)v[e]++;
	vector<L> el;L tmp;bool hasim=false;
	for(auto e:v){
		if(hasim==true&&e.second%2!=0){
			cout<<"NO SOLUTION\n";
			return 0;
		}
		if(e.second%2!=0)hasim=true;

		tmp.q=e.second;
		tmp.l=e.first;			
		el.push_back(tmp);
	}

	sort(el.begin(),el.end(),order);
	for(int i=0;i<el.size();i++){
		int n=ceil(el[i].q/2.0);
		while(n--)cout<<el[i].l;
	}
	
	for(int i=el.size()-1;i>=0;i--){
		int n=el[i].q/2;
		while(n--)cout<<el[i].l;
	}

	return 0;
}