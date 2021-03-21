#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	string in;
	set<string> list;

	cin.ignore();
	while(n--){
		getline(cin,in);
		istringstream ss(in);
		string w;
		while(ss>>w){
			list.insert(w);
		}

		int i=1;
		for(set<string>::iterator it=list.begin();it!=list.end();++it){
			cout<<*it;
			if((i++)!=list.size())cout<<" ";
		}
		cout<<"\n";

		list.clear();
	}


	return 0;
}