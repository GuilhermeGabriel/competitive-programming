#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<int> nums,ncpy;
	int n,i,q,s=0,m=0,c=0;cin>>n;
	while(n--){
		cin>>q;
		while(q--){
			cin>>i;
			nums.push_back(i);
		}
		ncpy=nums;
		do{
			//for(auto a:nums)cout<<a;
			//cout<<'\n';
			for(int i=0;i<nums.size()-1;i++){
				s+=abs(nums[i]-nums[i+1]);
			}
			if(s>m)m=s;
			s=0;
		}while(prev_permutation(nums.begin(), nums.end()));
		nums=ncpy;
		do{
			//for(auto a:nums)cout<<a;
			//cout<<'\n';
			for(int i=0;i<nums.size()-1;i++){
				s+=abs(nums[i]-nums[i+1]);
			}
			if(s>m)m=s;
			s=0;
		}while(next_permutation(nums.begin(), nums.end()));

		nums.clear();
		cout<<"Case "<<++c<<": "<<m<<'\n';m=0;
		//break;
	}

	return 0;
}
