#include "bits/stdc++.h"

using namespace std;

int main(){
	int n,ant,at,v;long long s=0;

	cin>>n>>ant;

	for(int i=1;i<n;i++){
		cin>>at;
		if(at<ant){
			v=abs(at-ant);
			s+=v;
			at=at+v;
		}
		ant=at;
	}

	cout<<s<<'\n';
}
	