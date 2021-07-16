#include <bits/stdc++.h>

using namespace std;

int cr;
int fib(int n){
	cr++;
	if(n==0)return 0;
	if(n==1)return 1;
	return fib(n-1)+fib(n-2);
}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,i,f;cin>>n;
	while(n--){
		cin>>i;f=fib(i);
		cout<<"fib("<<i<<") = "<<cr-1<<" calls = "<<f<<"\n";
		cr=0;
	}
	

	return 0;
}