#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,d; cin>>a>>b>>c>>d;

	for(int i=a;i<=c/a;i+=a){
		if(i%a==0&&i%b!=0&&c%i==0&&d%i!=0){
			cout<<i<<endl;
			return 0;
		}
	}

	cout<<-1<<endl;

	return 0;
}