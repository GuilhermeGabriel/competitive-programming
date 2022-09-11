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

  for(int a=0;a<n;a++){
    int i=0,j=n-1,o=x-vals[a].first;
    while(i<j){
      if(i!=a&&j!=a&&vals[i].first+vals[j].first==o){
        cout<<vals[i].second
            <<" "
            <<vals[j].second
            <<" "
            <<vals[a].second
            <<'\n';
        return 0;
      }

      if(vals[i].first+vals[j].first<o){
        i++;
      }else{
        j--;
      }
    }  
  }

  cout<<"IMPOSSIBLE"<<'\n';

  return 0;
}