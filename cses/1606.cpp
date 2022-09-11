#include "bits/stdc++.h"
using namespace std;

int main(){
  int k,n,i;
  set<int> v;

  while(cin>>k>>n){
    vector<int> vals;

    while(k--){
      cin>>i;
      if(v.count(i)==0){
        vals.push_back(i);
        v.insert(i);
      }
    }

    for(int i=0;i<(int)vals.size();i++){
      cout<<vals[i];
      if(i<(int)vals.size()-1)cout<<' ';
    }

    cout<<'\n';
    v.clear();
    vals.clear();
  }

  return 0;
}
