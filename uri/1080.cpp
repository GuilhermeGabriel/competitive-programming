#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int i=0,a,im,me=INT_MIN;
	while(cin>>a){
		if(a>me){me=a;im=i;}i++;
	}
	cout<<me<<'\n'<<++im<<'\n';

	return 0;
}
