#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
struct chash { /// use most bits rather than just the lowest ones
  const uint64_t C = ll(2e18*acos((long double)-1))+71; // large odd number
  const int RANDOM = rng();
  ll operator()(ll x) const { /// https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
    return __builtin_bswap64((x^RANDOM)*C); }
};

template<class K,class V> using ht = gp_hash_table<K,V,chash>;


int main(){
  int n,x;cin>>n>>x;
  vector<int> vals(n);
  ht<int,pair<int,int>> sums;

  for(int i=0;i<n;i++)cin>>vals[i];
  
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int sum_ob=x-vals[i]-vals[j];
      if(sums.find(sum_ob)!=sums.end()){
        cout<<i+1<<' '<<j+1<<' '
        <<sums[sum_ob].first+1<<' '<<sums[sum_ob].second+1;
        return 0;
      }

      //sums[vals[i]+vals[j]]={i,j};
    }

    for(int j=i-1;j>=0;j--)sums[vals[i]+vals[j]]={i,j};
  }  

  // for(auto e:sums)
  //   cout<<e.second.first<<' '<<e.second.second<<'\n';


  cout<<"IMPOSSIBLE"<<'\n';

  return 0;
}