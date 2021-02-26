#include <bits/stdc++.h>

using namespace std;

int bs(vector<int> &vec, int l, int r, int x){
	int m=(l+r)/2;
	if(l>r)return -1;
	if(vec[m]==x)return m;
	else if(vec[m]<x)return bs(vec,l+1,r,x);
	else return bs(vec,l,r-1,x);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> nums={2,4,5,9,-1,5,12};
	sort(nums.begin(), nums.end());
	for(auto x:nums)cout<<x<<" ";
	cout<<"\n"<<bs(nums,0,nums.size()-1,2);


	return 0;
}