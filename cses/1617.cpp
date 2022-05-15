#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll pot2(ll a, ll n){
  if(n==0)return 1;
  return (a*pot2(a,n-1))%1000000007;
}

int main(){
  ll n;cin>>n;

  cout<<pot2(2,n)<<'\n';

  return 0;
}