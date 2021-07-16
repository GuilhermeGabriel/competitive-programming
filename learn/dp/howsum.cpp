#include "bits/stdc++.h"

using namespace std;

vector<int> v, memo(100000);

bool howsum(int s,int q,int *nums){
	if(s==0)return true;
	if(s<0)return false;
	if(memo[s]==1)return true;
	if(memo[s]==-1)return false;

	for(int i=0;i<q;i++){
		int r=s-nums[i];
		bool res=howsum(r,q,nums);
		if(res==true){
			v.push_back(nums[i]);
			memo[s]=1;
			return true;
		}
	}

	memo[s]=-1;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int sumsin[]={8,7};
	cout<<howsum(65,2,sumsin)<<'\n';
	for(auto e:v)cout<<e;
	return 0;
}