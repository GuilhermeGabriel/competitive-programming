#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<double> el;
	string in; double r;

	while(cin>>in){
		int idx=in.find(',');
		in[idx]='.';
		r=stod(in);
		el.push_back(r);r=0;
	}

	sort(el.begin(),el.end());
	for(auto e:el)cout<<e<<"\n";

	return 0;
}
