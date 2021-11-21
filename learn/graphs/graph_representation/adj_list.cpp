#include "bits/stdc++.h"
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  /*adj list*/
  vector<int> adj[10];

  adj[1].push_back(2);
  adj[2].push_back(3);
  adj[2].push_back(4);
  adj[3].push_back(4);
  adj[4].push_back(1);

  /*adj list weighted*/
  vector<pair<int,int>> adjw[10];
  adjw[1].push_back({2,5});
  adjw[2].push_back({3,7});
  adjw[2].push_back({4,6});
  adjw[3].push_back({4,5});
  adjw[4].push_back({1,2});

  for(auto u: adjw[2]){
    cout<<u.first<<' '<<u.second<<'\n';
  }

  return 0;
}