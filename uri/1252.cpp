#include "bits/stdc++.h"

using namespace std;

int m;
bool order(int a, int b){
	int mod_a=a%m,mod_b=b%m;
	if(mod_a!=mod_b)return mod_a<mod_b;
	if((a%2!=0&&b%2==0)&&(mod_a==mod_b))return true;
	if((a%2==0&&b%2!=0)&&(mod_a==mod_b))return false;	
	if((a%2!=0&&b%2!=0)&&(mod_a==mod_b))return a>b;
	if((a%2==0&&b%2==0)&&(mod_a==mod_b))return a<b;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int i,n;
	vector<int> nums;
	while(cin>>n>>m,n||m){
		cout<<n<<' '<<m<<'\n';
		while(n--){cin>>i;nums.push_back(i);}
		sort(nums.begin(),nums.end(),order);
		for(auto e:nums)cout<<e<<'\n';
		nums.clear();
	}
	cout<<n<<' '<<m<<'\n';	

	return 0;
}