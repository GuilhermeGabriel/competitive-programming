#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,a,t,min; string p,pm;
	while(cin>>n&&n){
		cin>>p>>a>>t; min=a-t; pm=p;
		for(int i=1;i<n;i++){
			cin>>p>>a>>t;
			if(a-t<min){min=a-t;pm=p;}
		}
		cout<<pm<<"\n";
	}

	return 0;
}