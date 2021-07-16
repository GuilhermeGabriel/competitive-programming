#include "bits/stdc++.h"

using namespace std;

int s=0,e,m;
int memo[1000100];
/*
int mcsr(vector<int> const &v, int i){
	if(i==0)return v[0];
	if(memo[i])return memo[i];
	memo[i]=max(mcsr(v,i-1)+v[i],v[i]);
	return memo[i];
}*/

int mcsit(vector<int> const &v){
	memo[0]=m=v[0];s=e=0;
	for(int i=1;i<v.size();i++){
		memo[i]=max(memo[i-1]+v[i],v[i]);
		if(memo[i]>m){m=memo[i];e=i;}
		if(memo[i-1]+v[i]<v[i])s=i;
	}
	return m;
}

int mcsit2(vector<int> &v){
	int m=v[0],p=v[0];
	for(int i=1;i<v.size();i++){
		p=max(p+v[i],v[i]);
		m=max(m,p);
	}
	return m;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v={-1,-1,5,-1,2,-1,-5,5,-1};
	cout<<mcsit(v)<<'\n';
	for(int i=0;i<v.size();i++)cout<<memo[i];cout<<'\n';
	cout<<s<<" "<<e;

	return 0;
}