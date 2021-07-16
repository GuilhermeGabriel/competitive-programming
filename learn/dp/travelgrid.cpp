#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll memo[1000][1000];

ll gridtraveler(ll m, ll n){
	if(m==1&&n==1)return 1;
	if(m==0||n==0)return 0;
	if(memo[m][n])return memo[m][n];
	memo[m][n]=gridtraveler(m,n-1)+gridtraveler(m-1,n);
	return memo[m][n];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cout<<gridtraveler(2,3)<<'\n';	
	cout<<gridtraveler(3,2)<<'\n';	
	cout<<gridtraveler(30,30)<<'\n';	

	return 0;
}