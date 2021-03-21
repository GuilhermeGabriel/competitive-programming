#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,pi,s=0,q=0;
	while(cin>>n&&n!=-1){
		while(n--){
			cin>>pi;s+=pi;
			if(s%100==0){q++;s=0;}
		}
		cout<<q<<"\n";
		s=q=0;
	}	

	return 0;
}