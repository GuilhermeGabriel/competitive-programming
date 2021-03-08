#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n=3;
	for (int b = 0; b < (1<<n); b++) {
		vector<int> subset;
		for (int i = 0; i < n; i++) {
			if (b&(1<<i)) subset.push_back(i);
		}
		
		for(int i=0;i<subset.size();i++)
			cout<<subset[i]<<" ";
		cout<<"\n";
	}

	

	return 0;
}