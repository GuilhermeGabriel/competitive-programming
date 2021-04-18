#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> nums(10);
	for(int i=0;i<10;i++)cin>>nums[i];
	
	sort(nums.begin(), nums.end());
	for(auto n:nums)cout<<n<<" ";
	cout<<"\n";
	sort(nums.rbegin(), nums.rend());
	for(auto n:nums)cout<<n<<" ";
	cout<<"\n";

	return 0;
}
