#include <bits/stdc++.h>

using namespace std;

int qc=0;

int fib(int n){
	if(n==0||n==1){
		qc+=1;
		return 1;
	}
	else return fib(n-1)+fib(n-2);
}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,i;cin>>n;
	while(n--){
		cin>>i;
		cout<<"fib("<<i<<") = "<<fib(i)<<" calls = "<<qc<<"\n";
		qc=0;
	}
	

	return 0;
}