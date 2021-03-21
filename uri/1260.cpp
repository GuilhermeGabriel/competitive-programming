#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,c=0;cin>>n; string in;
	map<string,int> arvs;

	cin.ignore();
	cin.ignore();
	

	while(n--){
		while(getline(cin,in)&&!in.empty()){
			arvs[in]++;
			c++;
		}

		cout<<fixed<<setprecision(4);
		for(map<string,int>::iterator it=arvs.begin();it!=arvs.end();it++){
			cout<<it->first<<" "<<((it->second*100.0)/c)<<"\n";
		}
		
		if(n!=0)cout<<endl;
		arvs.clear();
		c=0;
	}

	return 0;
}