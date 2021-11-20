#include "bits/stdc++.h"

using namespace std;

int merge_sort(string &v){
	int inv=0,INF=1e9;
	
	if(v.size()==1)return 0;
	string u1,u2;
	for(int i=0;i<v.size()/2;i++)u1.push_back(v[i]);
	for(int i=v.size()/2;i<v.size();i++)u2.push_back(v[i]);
	
	inv+=merge_sort(u1);
	inv+=merge_sort(u2);
	
	u1.push_back('z');
	u2.push_back('z');
	
	int ini1=0,ini2=0;
	
	for(int i=0;i<v.size();i++){
		if(u1[ini1]<=u2[ini2]){
			v[i]=u1[ini1];
			ini1++;
		}else{
			v[i]=u2[ini2];
			ini2++;
			inv+=u1.size()-ini1-1;
		}
	}
	
	return inv;
}

struct F{
	int index,inv;
	string str;
};

bool order(F a,F b){
	if(a.inv!=b.inv)return a.inv<b.inv;
	return a.index<b.index;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int M,n,m;cin>>M>>ws;
	vector<F> v;string str;

	while(cin>>n>>m){
		for(int i=0;i<m;i++){
			cin>>str;F tmp;
			tmp.str=str;
			tmp.inv=merge_sort(str);
			tmp.index=i;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end(),order);
		for(int i=0;i<v.size();i++){
			cout<<v[i].str<<'\n';
		}
		if(M-->1)cout<<'\n';v.clear();
	}

	return 0;
}
