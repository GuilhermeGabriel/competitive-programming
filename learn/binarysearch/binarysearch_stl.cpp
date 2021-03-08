#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> nums={2,4,5,9,-1,5,12};
	sort(nums.begin(), nums.end());
	for(auto x:nums)cout<<x<<" ";

	int x=5, n=nums.size();
	auto kl=lower_bound(nums.begin(),nums.end(),x)-nums.begin();
	auto ku=upper_bound(nums.begin(),nums.end(),x)-nums.begin();
	
	if(kl<n&&nums[kl]==x)cout<<"\n"<<kl;
	if(ku<n&&nums[ku-1]==x)cout<<"\n"<<ku;

	auto r=equal_range(nums.begin(),nums.end(),x);
	cout<<"\n"<<r.second-r.first;

	return 0;
}