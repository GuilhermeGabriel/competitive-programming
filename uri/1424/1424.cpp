#include <bits/stdc++.h>

using namespace std;

struct Num{
	vector<int> pos;
};

int main(){
	int n,m,in;
	map<int, Num> nums;

	while(cin>>n>>m){
		for(int i=0;i<n;i++){
			cin>>in; 
			nums[in].pos.push_back(i);
		}

		int k,q;
		while(m--){
			cin>>k>>q;
			if(nums[q].pos.size()<k)cout<<0<<endl;
			else cout<<nums[q].pos[k-1]+1<<endl;
		}
		nums.clear();
	}

	return 0;
}