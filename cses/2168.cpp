#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std; 

typedef 
tree<pair<int,int>,
null_type,
less<pair<int,int>>,
rb_tree_tag
tree_order_statistics_node_update>
indexed_set;

int main(){
  int n;cin>>n;
  indexed_set ranges;

  int a,b;
  while(n--){
    cin>>a>>b;
    ranges.insert({a,b});
  }

  for(auto e:ranges)
    cout<<e.first<<e.second<<'\n';

  /*

4
1 6
2 4
4 8
3 6

  */

}