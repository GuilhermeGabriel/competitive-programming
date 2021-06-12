#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t,n;cin>>t;
	while(t--){
		vector<unordered_set<int>> sets;
		unordered_set<int> tmp;
		int i,m;cin>>n;
		while(n--){
			cin>>m;
			while(m--){
				cin>>i;
				tmp.insert(i);
			}
			sets.push_back(tmp);
			tmp.clear();
		}
		int op,q,s1,s2;cin>>q;
		unordered_set<int> tmp2;
		while(q--){
			cin>>op>>s1>>s2;
			unordered_set<int> sa=sets[s1-1];
			unordered_set<int> sb=sets[s2-1];

			if(op==1){
				int s=0;
				for(int k=1;k<=60;k++){
					if(sa.count(k)&&sb.count(k))s++;
				}
				cout<<s<<'\n';
			}else{
				int s=0;
				for(int k=1;k<=60;k++){
					if(sa.count(k)||sb.count(k))s++;
				}
				cout<<s<<'\n';
			}
			tmp2.clear();
		}
		sets.clear();
	}
	

	return 0;
}