#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,in;cin>>n;

  while(n--){
    cin>>in;
  }

  int m=1,r=0;
  while(vals.size()>1){
    for(auto it=vals.begin();it!=vals.end();){
      // cout<<it->second;

      if(m==it->second){
        m++;
        it = vals.erase(it);
        r++;
      }else{
        it++;
      }

    }
    for(auto it=vals.begin();it!=vals.end();it++){
      cout<<it->second;
    }
    break;
  }

  cout<<r<<'\n';

  return 0;
}