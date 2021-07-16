#include "bits/stdc++.h"

using namespace std;

int memo[10001];

int qn(vector<int> const &nums,int s){
	if(s<0)return 1e9;
	if(s==0)return 0;
	if(memo[s])return memo[s];
	int minq=1e9;
	for(int i=0;i<nums.size();i++){
		minq=min(minq,qn(nums,s-nums[i])+1);
	}
	memo[s]=minq;
	return minq;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> quads;
	for(int i=1;i<=100;i++)quads.push_back(i*i);

	int n;
	while(cin>>n){
		if(qn(quads,n)<=2)cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}