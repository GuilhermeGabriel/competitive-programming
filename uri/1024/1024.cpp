#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	string in;

	cin.ignore();
	while(n--){
		getline(cin, in);
		for(int i=0;i<in.size();i++){
			if(in[i]>='A'&&in[i]<='Z'||
				in[i]>='a'&&in[i]<='z')in[i]=in[i]+3;
		}

		reverse(in.begin(), in.end());

		for(int i=(in.size()/2);i<in.size();i++){
			in[i]=in[i]-1;
		}

		for(int i=0;i<in.size();i++)
			cout<<in[i];
		cout<<endl;
	}

	return 0;
}