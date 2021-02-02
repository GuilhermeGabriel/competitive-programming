#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q, inn, inq, c=1;
	vector<int> v;

	while(cin>>n>>q&&n||q){
		while(n--){cin>>inn; v.push_back(inn);}
		sort(v.begin(), v.end());

		cout<<"CASE# "<<c<<":"<<endl;
		while(q--){
			cin>>inq;
			bool found=false;
			int i;
			for(i=0;i<v.size()&&!found;i++){
				found = (v[i]==inq);
			}

			if(found)cout<<inq<<" found at "<<i;
			else cout<<inq<<" not found";
			cout<<"\n";
		}
		c++;
		v.clear();
	}

	return 0;
}