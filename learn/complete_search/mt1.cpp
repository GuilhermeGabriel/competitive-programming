#include <bits/stdc++.h>

using namespace std;

vector<int> subset;

void search(int k,int n){
	if(k==n){
		cout<<"( ";
		for(int i=0;i<subset.size();i++)
			cout<<subset[i]<<" ";
		cout<<")\n";
	}else{
		search(k+1,n);
		subset.push_back(k);
		search(k+1,n);
		subset.pop_back();
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	search(0,3);

	return 0;
}