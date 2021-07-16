#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	/*
	int n=10000;
	int length[n],v[n];
	for(int i=0;i<n;i++)v[i]=i;
	random_shuffle(v,v+n);*/
	
	int v[]={6,2,5,1,7,4,8};
	int length[8],n=8;

	for(int k=0;k<n;k++){
		length[k]=1;
		for(int i=0;i<k;i++){
			if(v[i]<v[k]){
				length[k]=max(length[k],length[i]+1);
			}
		}
	}

	cout<<length[n-1];

	return 0;
}
