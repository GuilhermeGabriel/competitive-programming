#include "bits/stdc++.h"
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,p=0,b=0;cin>>n;
  bool c=true,cl=true;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(c)b++;
      else p++;
      c=!c;
    }
    c=!cl;cl=!cl;
  }
  cout<<b<<" casas brancas e "<<p<<" casas pretas\n";

  return 0;
}