#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string in,r; bool p=true; 
	while(getline(cin,in)){
		for(int i=0;i<in.size();i++){
			if(in[i]=='"'){
				if(p)r+="``";
				else r+="''";
				p=!p;
			}else
				r+=in[i];
		}
		cout<<r<<"\n";
		r="";
	}

	return 0;
}