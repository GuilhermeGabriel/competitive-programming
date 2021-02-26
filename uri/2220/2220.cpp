#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;cin>>n;
	string l,i;
	map<char,int> ltt;

	while(n--){
		cin>>l>>i;

		sort(l.begin(), l.end());
		sort(i.begin(), i.end());

		for(int j=0;j<i.size();j++){
			auto r=equal_range(l.begin(),l.end(),i[j]);
			ltt[i[j]]=r.second-r.first;
		}

		int mn=INT_MAX;
		for(auto x:ltt)if(x.second<mn)mn=x.second;
		
		cout<<mn<<"\n";
		ltt.clear();
	}

	return 0;
}