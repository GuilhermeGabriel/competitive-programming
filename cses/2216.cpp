#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,r=0;cin>>n;
  unordered_map<int,int> v;

  int in,i=0;
  while(n--){
    cin>>in;
    v[in]=i++;
  }

  /*
  5 3
  4 2 1 5 3
  2 3
  1 5
  2 3
  */

  for(int i=1;i<(int)v.size();i++)
    if(v[i]<v[i-1])r++;

  cout<<r+1<<'\n';

  return 0;
}