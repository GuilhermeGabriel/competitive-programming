#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q; cin>>n;
	string in, qin;

	while(n--){
		cin>>in>>q;
		while(q--){
			cin>>qin;
			int j=0;

			for(int i=0;i<in.size()&&j!=qin.size();i++){
				if(in[i]==qin[j])j++;
			}

			if(j==qin.size()) cout << "Yes" << endl;
			else cout << "No" << endl;
			j=0;
			
			//cout << c << endl;
		}
	}

	return 0;
}