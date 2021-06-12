#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,i,ii;
	vector<map<char,set<int>>> m;
	vector<vector<char>> k;

	while(cin>>n){
		char l='A';
		map<char,set<int>> tmpm;

		for(int a=0;a<n;a++){
			for(int j=0;j<6;j++){
				cin>>i>>ii;
				set<int> v;
				v.insert(i);
				v.insert(ii);
				tmpm['A'+j]=v;
				cout<<tmpm['B'].size();	
			}
			m.push_back(tmpm);

			char c;vector<char> tmpc;
			for(int j=0;j<6;j++){
				cin>>c;tmpc.push_back(c);
				cout<<c;
			}
			k.push_back(tmpc);
		}

		/*for(char e=0;e<6;e++){
			char l1=char(k[0][e]);
			char l2=char(k[1][e]);
			cout<<l1<<l2<<'\n';
			
			set<int> a=m[0][l1];
			set<int> b=k[1][l2];
			for(int z=1;z<=9;z++){
				if(a.count(z)&&b.count(z))cout<<z;
			}
		}*/
		break;

	}

	return 0;
}