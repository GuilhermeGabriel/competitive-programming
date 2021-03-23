#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int ii,n,k,s=0;cin>>n>>k;
	deque<int> in,r;

	for(int i=0;i<n;i++){
		cin>>ii;
		in.push_back(ii);
		r.push_back(0);
		s+=ii;
	}

	int mult=k/n;
	if(mult!=0)
		for(int i=0;i<n;i++)r[i]+=s*mult;

	int res=k%n;
	while(res--){
		for(int i=0;i<in.size();i++)r[i]+=in[i];
		int e=in.back();
		in.pop_back();
		in.push_front(e);
	}

	for(int i=0;i<r.size();i++){
		cout<<r[i];
		if(i<n-1)cout<<" ";
	}
	cout<<"\n";

	return 0;
}
