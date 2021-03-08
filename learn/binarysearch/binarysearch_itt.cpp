#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> nums={2,4,5,9,-1,5,12};
	sort(nums.begin(), nums.end());
	for(auto x:nums)cout<<x<<" ";
	
	int a=0,b=nums.size()-1,x=2;
	while(a<=b){
		int m=(a+b)/2;
		if(nums[m]==x){cout<<"\n"<<m;break;}
		if(nums[m]>x)b-=1;
		else a+=1;
	}

	return 0;
}