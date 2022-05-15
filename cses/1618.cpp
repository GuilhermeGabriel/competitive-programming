#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll n,c=0;cin>>n;
  
  for(ll i=5; n/i>=1; i*=5){
    c+=n/i;
  }

  cout << c << '\n';

  return 0;
}