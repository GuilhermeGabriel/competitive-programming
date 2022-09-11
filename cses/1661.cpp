#include "bits/stdc++.h"
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,x,e;cin>>n>>x;

  long long sum=0,ans=0;
  map<long long,int> sums;
  sums[0]++;
  for(int i=0;i<n;i++){
    cin>>e;sum+=e;
    ans+=sums[sum-x];
    sums[sum]++;
  }
 
  cout<<ans<<'\n';
 
  return 0;
}