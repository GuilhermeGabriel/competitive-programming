#include "bits/stdc++.h"
using namespace std;

int fat(int n){
	if(n==0)return 1;
	return n*fat(n-1);
}

int main(){
	int in,q=0;cin>>in;

	for(int i=9;i>=0;i--){
		while(fat(i)<=in){
			q++;
			in-=fat(i);
		}
	}

	cout<<q<<"\n";

	return 0;
}