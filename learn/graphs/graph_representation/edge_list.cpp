#include "bits/stdc++.h"
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<pair<int,int>> edges;
  edges.push_back({1,2});
  edges.push_back({2,3});
  edges.push_back({2,4});
  edges.push_back({3,4});
  edges.push_back({4,1});

  vector<tuple<int,int,int>> edgesw;
  edgesw.push_back({1,2,5});
  edgesw.push_back({2,3,7});
  edgesw.push_back({2,4,6});
  edgesw.push_back({3,4,5});
  edgesw.push_back({4,1,2});

  return 0;
}