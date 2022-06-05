#include "bits/stdc++.h"
using namespace std;

int main(){
	string in;cin>>in;
	unordered_map<char,int> qletras;	

	for(auto l: in)qletras[l]++;

	vector<pair<int,char>> mt_frase;int qi=0;
	pair<int,char> tmpi;
	for(auto e: qletras){
		if(e.second%2!=0)qi++;
		if(qi>1){
			cout<<"NO SOLUTION\n";
			return 0;
		}

		if(e.second%2==0)
			mt_frase.push_back({e.second/2, e.first});
		else
			tmpi = make_pair(e.second,e.first);
	}
	mt_frase.push_back(tmpi);

	//sort(mt_frase.rbegin(),mt_frase.rend());

	// for(auto l: mt_frase)
	// 	cout<<l.first<<l.second<<'\n';

	string aux;
	for(auto l: mt_frase)
		for(int i=0;i<l.first;i++)aux+=l.second;
	
	//outf+=aux;

	for(int i=(int)mt_frase.size()-2;i>=0;i--){
		pair<int,char> tmp;
		tmp = mt_frase[i];
		for(int j=0;j<tmp.first;j++)aux+=tmp.second;
	}

	//if(qi>0)aux.pop_back();

	// reverse(aux.begin(),aux.end());
	
	// outf+=aux;

	cout<<aux<<'\n';		

	return 0;
}