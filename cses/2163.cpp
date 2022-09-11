#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std; 

typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
  int n,k,idx=0;cin>>n>>k;
  indexed_set circle;

  for(int i=1;i<=n;i++)
    circle.insert(i);

  while(!circle.empty()){
    idx=(idx+k)%circle.size();
    
    auto it=circle.find_by_order(idx);
    cout<<*it<<' ';
    circle.erase(it);
    // idx=idx%circle.size();
  }

}