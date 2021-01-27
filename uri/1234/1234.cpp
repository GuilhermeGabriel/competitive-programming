#include <bits/stdc++.h>

using namespace std;

int main(){
	string in;
	
	while(getline(cin, in)){
		int k=0;
		for(int i=0;i<in.size();i++){
			if(in[i]>='A'&&in[i]<='Z'){
				if(k%2!=0)in[i]+=32;
				k++;
				cout<<in[i];
				continue;
			}

			if(in[i]>='a'&&in[i]<='z'){
				if(k%2==0)in[i]-=32;
				k++;
				cout<<in[i];
				continue;
			}
			cout<<in[i];
		}
		cout<<endl;
	}

	return 0;
}