#include <bits/stdc++.h>

using namespace std;
#define ff first
#define ss second
#define pb push_back
#define vec vector

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,nn,q,qd=0,ii;cin>>n;
	vec<int> in,cp;
	while(n--){
			cin>>q;
			for(int i=0;i<q;i++){
				cin>>ii;
				in.pb(ii);
				cp.pb(ii);
			}
			sort(in.begin(), in.end(), greater<int>());
			for(int i=0;i<q;i++)if(cp[i]==in[i])qd++;
			cout<<qd<<"\n";
			qd=0;in.clear();cp.clear();
	}

	return 0;
}