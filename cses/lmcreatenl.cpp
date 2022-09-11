#include "bits/stdc++.h"
using namespace std;

int main(){
  
  double v[8];int i=300;
  while(cin>>v[0]){
    for(int i=1;i<8;i++)cin>>v[i];
    // cout<<v[1]<<'\n';
    cout<<i++<<' '<<v[1]+v[3]+v[4]+200000<<'\n';
  }  

  return 0;
}