#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,q,i;cin>>n;
	vector<int> alt;

	while(n--){
		cin>>q;
		while(q--){
			cin>>i;
			alt.push_back(i);
		}
		sort(alt.begin(), alt.end());
		for(int i=0;i<alt.size();i++){
			cout<<alt[i];
			if(i!=alt.size()-1)cout<<" ";
		}
		
		cout<<"\n";
		alt.clear();
	}

	return 0;
}