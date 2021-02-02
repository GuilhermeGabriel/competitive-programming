#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,o;cin>>n;
	string in; float pr, s=0;
	map<string, float> mPrs;

	while(n--){
		cin>>m;
		while(m--){
			cin>>in>>pr;
			mPrs[in]=pr;
		}
		cin>>o;
		while(o--){
			string f;int q;
			cin>>f>>q;
			s+=mPrs[f]*q;
		}
		cout<<fixed<<setprecision(2);
		cout<<"R$ "<<s<<endl;

		mPrs.clear();
		s=0;
	}

	return 0;
}
