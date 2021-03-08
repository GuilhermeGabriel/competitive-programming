#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main(){
	int a, b, in;

	while(cin>>a>>b&&a||b){
		vector<int> va, vb;

		while(a--){
			cin>>in;
		  if(!va.empty()&&va.back()==in) continue;
		  else va.pb(in);
		}
		
		while(b--){
			cin>>in;
			if(!vb.empty()&&vb.back()==in) continue;
		  else vb.pb(in);
		}

		if(va.size()>vb.size())swap(va, vb);

		int r=va.size();
		for(int i=0;i<va.size();i++){
			for(int j=0;j<vb.size();j++){
				if(vb[j]>va[i])break;
				if(va[i]==vb[j])r--;
			}
		}

		cout<<r<<endl;
	}

	return 0;
}