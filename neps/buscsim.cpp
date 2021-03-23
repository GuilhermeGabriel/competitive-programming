#include "bits/stdc++.h"

using namespace std;

int main(){	
	int x,v[10];

	for(int i=0;i<10;i++){
		cin>>v[i];
	}

	cin>>x;

	for(int i=0;i<10;i++){
		if(v[i]==x){
			cout<<"Sim\n";
			return 0;
		}
	}

	cout<<"NAO\n";

	return 0;
}
