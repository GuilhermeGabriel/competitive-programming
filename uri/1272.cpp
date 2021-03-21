#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	string in, out;

	cin.ignore();
	while(n--){
		getline(cin, in);
		if(in.size()==0)continue;
		if(in[0]!=' ')out+=in[0];
		for(int i=1;i<in.size();i++){
			if(in[i]!=' '&&in[i-1]==' ')out+=in[i];
		}
		cout<<out<<endl;
		out="";
	}

	return 0;
}