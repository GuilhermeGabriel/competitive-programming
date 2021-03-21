#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> sumsf;

ll sum_p(string s){
	ll sum=0;
	for(int i=0;i<s.size();i++)sum+=s[i]-0;
	return sum;
}

ll s_e(vector<string> &v, int p){
	int k=1;
	ll sum=0;
	for(int i=p;i>=0;i--){
		sum+=sumsf[i]*k++;
	}
	return sum;
}

ll s_d(vector<string> &v, int p){
	int k=1;
	ll sum=0;
	for(int i=p+1;i<v.size();i++){
		sum+=sumsf[i]*k++;
	}
	return sum;
}

ll ls=-1;

int bs(vector<string> &v, int l, int r){
	int p=(l+r)/2;
	ll se=s_e(v,p);
	ll sd=s_d(v,p);

	if(ls!=-1&&ls==se)return -1;
	ls=se;

	if(se==sd)return p;
	if(se>sd)bs(v,0,p-1);
	else bs(v,p+1,r);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n; string i;
	vector<string> nomes;

	while(cin>>n&&n){
		while(n--){
			cin>>i;nomes.push_back(i);
		}

		for(auto s: nomes) sumsf.push_back(sum_p(s));

		int idx=bs(nomes,0,nomes.size()-1);
		if(idx==-1)cout<<"Impossibilidade de empate.";
		else cout<<nomes[idx];
		cout<<"\n";
		nomes.clear();
		sumsf.clear();
	}

	return 0;
}