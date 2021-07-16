#include "bits/stdc++.h"

using namespace std;

int memo[100100];
/*
int bestlucro_r(vector<int> const &v,int i,int c){
	if(i==0)return 0;
	if(memo[i])return memo[i];
	int best=0;
	for(int k=i;k>=1;k--){
		for(int j=k-1;j>=0;j--){
			best=max(best,bestlucro_r(v,j,c)+v[k]-v[j]-c);
		}
	}
	memo[best]=best;
	return best;
}*/

/*
int bestlucro_it(vector<int> const &v, int c){
	vector<int> l(v.size(),0);l[0]=0;
	for(int i=1;i<v.size();i++){
		l[i]=l[i-1];
		for(int j=0;j<i;j++){
			l[i]=max(l[i],v[i]-v[j]-c+l[j]);
		}
	}
	return l[v.size()-1];
}*/
/*
int bestlucro_it_nln(vector<int> const &v, int c){
	vector<int> l(v.size(),1e9);
	l[0]=-1e9;

	for(int i=1;i<v.size();i++){
		int j=upper_bound(l.begin(),l.end(),v[i])-d.begin();
	}
	return l[v.size()-1];
}*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int i,n,c;cin>>n>>c;
	vector<int> v;
	while(n--){cin>>i;v.push_back(i);}
	cout<<bestlucro_r(v,v.size()-1,c)<<'\n';

	return 0;
}