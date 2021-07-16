#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int e,f,c,t,q=0;cin>>e>>f>>c;
	t=e+f;
	while(t-c>=0){
		q++;
		t-=c;
		t++;
	}
	cout<<q<<'\n';
	

	return 0;
}