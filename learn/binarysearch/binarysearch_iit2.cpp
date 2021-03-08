#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> nums={1,2,3,4,5,6,7,8,9,10};
	sort(nums.begin(), nums.end());
	for(auto x:nums)cout<<x<<" ";
	
	int k=0,x=2,n=nums.size();
	for (int b = n/2; b >= 1; b /= 2) {
		while (k+b < n && nums[k+b] <= x) k += b;
	}
	if (nums[k] == x) {
		cout<<"\n"<<k;
	}


	return 0;
}