#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,q;cin>>n;
	string in;
	deque<int,char> lpv,lpc;

	while(n--){
		cin>>in>>q;
		for(int i=0;i<in.size();i++){
			char l=in[i];
			if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'){
				lpv.push_back({l,i});
			}else{
				lpc.push_back({l,i});
			}
		}

		int o,d;
		while(q--){
			cin>>o;
			if(o==0){
				cin>>d;
				for(auto& l:lpv){
					l.second+=lpv[l.second+d].second;
					//l.second%=lpv.size();
				}
			}

			if(o==1){
				cin>>d;
				for(auto& l:lpc){
					l.second+=d;
					//l.second%=in.size();
				}
			}

			if(o==2){
				for(auto a:lpv)cout<<a.first<<a.second;
				cout<<'\n';
				//for(auto a:lpvr)cout<<a.first<<a.second;
				//for(auto a:lpv)r.push_back({(a.second%in.size()-1),a.first});
				//for(auto a:lpc)r.push_back({(a.second%in.size()-1),a.first});
				//sort(r.begin(), r.end());
				//for(auto a:r)cout<<a.second;
				r.clear();
				cout<<'\n';
			}
		}
		lpc.clear();
		lpv.clear();
		break;
	}

	return 0;
}
