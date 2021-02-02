#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,l,t,c=0;cin>>n>>l;
	int att[n];
	priority_queue<pair<int,int>> vend_temp;
	
	for(int i=n-1;i>=0;i--)vend_temp.push(make_pair(0,i));

	while(l--){
		for(int i=0;i<n&&(l--)+1;i++){
			cin>>t; 
			pair<int, int> tmp=vend_temp.top();
			vend_temp.pop();
			vend_temp.push(make_pair(-t,tmp.second));
		}
		break;

		//att[vend_temp.top().second-1]++;

		if(c==n||l==0){
			int tt=vend_temp.top().first;

			while(vend_temp.size()>0){
				pair<int, int> tmp=vend_temp.top();
			}
		}
	}

	while(vend_temp.size()>0){
		cout<<vend_temp.top().first;
		vend_temp.pop();
	}

	//for(int i=0;i<n;i++)cout<<att[i]<<"\n";

	return 0;
}
