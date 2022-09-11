#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,x;cin>>n>>x;
  vector<int> v(n);

  for(int i=0;i<n;i++)
    cin>>v[i];

  long long ans=0;

  int i=0,j=0,sum=v[i];
  while(i<n-1){
    // cout<<i<<' '<<j<<' ';
    // cout<<sum<<' '<<'\n';
    if(sum==x){
      ans++;
      
      if(i==j){j++;sum+=v[j];}
      else {sum-=v[i];i++;}

    }else if(sum<x){
      j++;
      sum+=v[j];
    }else{
      sum-=v[i];
      i++;
    }
  }

  if(v[j]==x)ans++;

  cout<<ans<<'\n';

  return 0;
}