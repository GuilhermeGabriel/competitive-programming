#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,o,in;cin>>n>>o;
  unordered_map<int,int> idxs,qnum;

  int idx=1;
  while(n--){
    cin>>in;
    idxs[in]=idx++;
    qnum[in]++;
  }

  for(auto item:idxs){
    int e=item.first,x=o-e;
    if(idxs[x]>0){
      if(x==e&&qnum[x]<2)continue;
      cout<<idxs[x]<<' '<<idxs[e]<<'\n';
      return 0;
    }
  }

  cout<<"IMPOSSIBLE"<<'\n';

  return 0;
}
