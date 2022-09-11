#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(){
  int n,x;cin>>n>>x;
  vector<pair<int,int>> vals(n);

  for(int i=0;i<n;i++){
    int v;cin>>v;
    vals[i]={v,i+1};
  }

  sort(vals.begin(),vals.end());

  int i=0,j=n-1;
  while(i<j){
    if(vals[i].first+vals[j].first==x){
      cout<<vals[i].second<<" "<<vals[j].second<<'\n';
      return 0;
    }

    if(vals[i].first+vals[j].first<x){
      i++;
    }else{
      j--;
    }
  }  

  cout<<"IMPOSSIBLE"<<'\n';

  return 0;
}