#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int in,n,qi=0,qf=0,qa=0,add;cin>>n;
	vector<int> fita;
	while(n--){
		cin>>in;qi++;
		if(in==0)break;
	}
	while(qi--)cout<<qi<<" ";

	while(n--){
		cin>>in;qa++;qf++;
		if(in==0){
			if(qa%2==0)add=0;else add=1;
			for(int i=1;i<qa/2+add;i++)cout<<i<<" ";
			for(int i=qa/2;i>=0;i--)cout<<i<<" ";
			qf=0;qa=0;
		}
	}
	for(int i=1;i<=qf;i++){
		cout<<i;
		if(i!=qf)cout<<" ";
	}
	cout<<"\n";

	return 0;
}
