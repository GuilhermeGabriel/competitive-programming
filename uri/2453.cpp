#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string in,r;getline(cin,in);
	int c=1;
	for(int i=1;i<in.size();i++){
		if(in[i]==' '){c=1;r+=' ';}
		if(in[i-1]!=' '&&in[i]!=' '){
			c++;
			if(c%2==0)r+=in[i];
			//r+=in[i];		
		}
	}

	cout<<r<<'\n';

	return 0;
}
