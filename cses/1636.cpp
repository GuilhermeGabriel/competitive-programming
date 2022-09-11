#include "bits/stdc++.h"
using namespace std;

const int mod = 1e9+7;

int main(){
  int n,x;cin>>n>>x;
  vector<int> sums(x+1,0), coins(n);

  for(int i=0;i<n;i++)
    cin>>coins[i];

  sums[0]=1;
  for(auto c:coins){
    for(int i=1;i<=x;i++){
      if(i-c>=0){
        sums[i]=(sums[i]+sums[i-c])%mod;
      }
    }
  }

  cout<<sums[x]<<'\n';

  // for(auto e:sums)
  //   cout<<e<<' ';

  return 0;
}