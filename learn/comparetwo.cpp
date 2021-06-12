#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int v[10]={0,1,2,3,4,5,6,7,8,9};
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			cout<<v[i]<<" "<<v[j]<<"\n";
		}
	}

	return 0;
}
