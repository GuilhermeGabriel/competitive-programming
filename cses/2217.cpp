#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,m,r=0;cin>>n>>m;
  vector<int> position_of(n+1),original(n+1);

  int in,i=1;
  while(n--){
    cin>>in;
    position_of[in]=i;
    original[i]=in;
    i++;
  }

  /*
  5 3
  4 2 1 5 3
  2 3
  1 5
  2 3
  */

  for(int i=1;i<(int)original.size();i++)
    if(position_of[i]<position_of[i-1])r++;
  r++;



/*
5 3
4 [2] [1] 5 3

2 3 -> (2,1),(2,3)/(1,2)

1 5
2 3
*/

  int a,b;set<pair<int,int>> undos;
  while(m--){
    cin>>a>>b;

    if(original[a]+1<=(int)original.size())
      undos.insert({original[a],original[a]+1});
    if(original[a]-1>=1)
      undos.insert({original[a]-1,original[a]});
    if(original[b]+1<=(int)original.size())
      undos.insert({original[b],original[b]+1});
    if(original[b]-1>=1)
      undos.insert({original[b]-1,original[b]});

    for(auto e:undos)
      // cout<<e.first<<' '<<e.second<<'\n';
      if(position_of[e.first]>position_of[e.second])r--;

    swap(original[a],original[b]);
    position_of[original[a]]=a;
    position_of[original[b]]=b;

    for(auto e:undos)
      if(position_of[e.first]>position_of[e.second])r++;          

    cout<<r<<'\n';
    // break;
    undos.clear();
  }

  // cout<<r+1<<'\n';

  return 0;
}