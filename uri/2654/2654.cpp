#include <bits/stdc++.h>

using namespace std;

struct Deus{
	string nome;
	int p,k,m;
};

bool order(Deus a, Deus b){
	if(a.p!=b.p)return a.p>b.p;
	if(a.k!=b.k)return a.k>b.k;
	if(a.m!=b.m)return a.m<b.m;
	return a.nome<b.nome;
}

int main(){
	int n;cin>>n;
	Deus tmp;
	vector<Deus> deuses;

	while(n--){
		cin>>tmp.nome>>tmp.p>>tmp.k>>tmp.m;
		deuses.push_back(tmp);
	}

	sort(deuses.begin(), deuses.end(), order);
	cout<<deuses[0].nome<<endl;

	return 0;
}