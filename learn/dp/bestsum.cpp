/*#include "bits/stdc++.h"

using namespace std;

vector<int> bestsum(int s,int q,int *nums){
	if(s==0)return {};
	if(s<0)return {-1};

	vector<int> shortcomb={};

	for(int i=0;i<q;i++){
		vector<int> remaindercomb=bestsum(s-nums[i],q,nums);
		if(remaindercomb[0]!=-1){
			vector<int> acom;
			acom=remaindercomb;
			acom.push_back(nums[i]);
			if(acom.size()<shortcomb.size())shortcomb=acom;
		}
	}

	return shortcomb;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int s=10,q=3,v[]={2,3,5};
	vector<int> r=bestsum(s,q,v);
	cout<<r.size();
	//for(auto e:r)cout<<e;

	return 0;
}*/