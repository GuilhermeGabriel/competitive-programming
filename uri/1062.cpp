#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, nc, in, c=0;
	vector<int> vagoes, resp;

	while(cin>>n&&n){
		nc=n;
		while(cin>>in&&in){			
			vagoes.push_back(in);

			if(c++==n-1){
				reverse(vagoes.begin(), vagoes.end());

				for(int i=0;i<vagoes.size();i++){
					resp.push_back(vagoes[i]);
					while(!resp.empty()&&resp.back()==nc){
						resp.pop_back();
						nc--;
					}
				}

				c=0;nc=n;
				cout<<((resp.size()>0)?"No":"Yes")<<endl;
				vagoes.clear();
				resp.clear();
			}
		}
		cout<<endl;
	}

	return 0;
}