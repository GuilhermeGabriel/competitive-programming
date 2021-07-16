#include "bits/stdc++.h"

using namespace std;

int memo[10000];

int MSC(int *A,int i){
	if(i==0)return 1;
	if(memo[i])return memo[i];
	int maior=-1e9;
	for(int j=0;j<i;j++){
		if(A[j]<A[i]){
			maior=max(maior,MSC(A,j)+1);
		}
	}
	memo[i]=maior;
	return maior;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	/*
	int v[10000];
	for(int i=0;i<10000;i++)v[i]=i;
	random_shuffle(v,v+10000);*/
	int v[]={6,2,5,1,7,4,8};
	cout<<MSC(v,7);

	return 0;
}