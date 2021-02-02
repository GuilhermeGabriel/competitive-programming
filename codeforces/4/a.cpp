#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;

	for(int i=1;i<n;i++){
		if((n-i)%2==0&&i%2==0){
			cout<<"YES"<<"\n";
			return 0;
		}
	}

	cout<<"NO"<<endl;

	return 0;
}