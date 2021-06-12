#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;string in;
	vector<string> vs;
	while(cin>>n&&n){	
		while(n--){
			cin>>in;vs.push_back(in);
		}
		int c=1;
		for(int i=0;i<vs.size();i++){
			for(int j=0;j<vs.size();j++){
				if(i==j)continue;
				int found=vs[j].find(vs[i]);
				if(found==0){
					c=0;
					break;
				}
			}
			if(c==0)break;
		}
		if(c==0)cout<<"Conjunto Ruim\n";
		else cout<<"Conjunto Bom\n";
		vs.clear();
	}
	
	return 0;
}