#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string in;
	while(getline(cin,in)){
		if(in.find("<body>")!=-1){
			while(getline(cin,in)){
				if(in.find("</body>")!=-1)return 0;
				cout<<in<<'\n';
			}
		}
	}
	

	return 0;
}