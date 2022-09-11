#include "bits/stdc++.h"
using namespace std;

const int m=1e9+7;

int main(){
  int n,o;cin>>n>>o;
  vector<int> coins(n);

  for(int i=0;i<n;i++)
    cin>>coins[i];

  int count[1000100];
  memset(count,0,sizeof(count));

  count[0]=1;
  for(int x=1;x<=o;x++){
    for(auto c:coins){
      if(x-c>=0){
        count[x]+=count[x-c];
        count[x]%=m;
      }
    }
  }

  cout<<count[o]<<'\n';

  return 0;
}
