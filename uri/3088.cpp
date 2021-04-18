#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string in,out;
	while(getline(cin,in)){
		istringstream s(in);
		string w;
		while(s>>w){
			if(w==","||w=="."&&!out.empty())out.pop_back();
			out+=w+" ";
		}
		cout<<out<<"\n";out="";
	}
	

	return 0;
}
