#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,in,q=0;cin>>n;
	vector<int> h[2];

	for(int i=0;i<2*n;i++){
		cin>>in;
		if(i<n)h[0].push_back(in);
		else h[1].push_back(in);
	}

	sort(h[0].rbegin(), h[0].rend());
	sort(h[1].rbegin(), h[1].rend());

	while(h[1].size()>0){
		if(h[1].back()<=h[0].back())h[1].pop_back();
		else{
			q++;
			h[0].pop_back();
			h[1].pop_back();
		}
	}

	cout<<q<<"\n";

	return 0;
}