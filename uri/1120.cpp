#include <bits/stdc++.h>

using namespace std;

int main(){
	string n,d,res="0";

	while(cin>>n>>d&&n!="0"&&d!="0"){
		for(int i=0;i<d.size();i++){
			if(n[0]!=d[i])res+=d[i];
		}

		string aux="0";
		for(int i=1;i<res.size();i++){
			if(res[i]=='0')continue;
			else{
				aux="";
				aux.append(res,i,res.size()-i+1);
				break;
			}
		}

		cout<<aux<<endl;
		res="0";
	}

	return 0;
}