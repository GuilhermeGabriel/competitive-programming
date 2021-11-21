#include "bits/stdc++.h"

using namespace std;

int fat(int n){
	if(n==0)return 1;
	else return n*fat(n-1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	cout<<fat(5);

	return 0;
}