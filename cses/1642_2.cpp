#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(){
  int n,x;cin>>n>>x;
  vector<int> vals(n);
  vector<tuple<int,int,int>> sums;

  for(int i=0;i<n;i++)cin>>vals[i];
  
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      sums.push_back({vals[i]+vals[j],i,j});
    }
  }

  sort(sums.begin(),sums.end());

  int i=0,j=sums.size()-1;
  while(i<=j){
    if(get<0>(sums[i]) + get<0>(sums[j]) == x){
      
      if((get<1>(sums[i]) != get<1>(sums[j]))
      &&(get<1>(sums[i]) != get<2>(sums[j]))
      &&(get<2>(sums[i]) != get<1>(sums[j]))
      &&(get<2>(sums[i]) != get<2>(sums[j]))
      ){
      
      cout
      <<get<1>(sums[i])+1
      <<' '
      <<get<2>(sums[i])+1
      <<' '
      <<get<1>(sums[j])+1
      <<' '
      <<get<2>(sums[j])+1
      <<'\n';

      return 0;
      }
    } 

    if(get<0>(sums[i]) + get<0>(sums[j]) < x){
      i++;
    }else{
      j--;
    }
  }

  // for(auto e:sums)
  //   cout<<get<0>(e)<<' '<<get<1>(e)<<' '<<get<2>(e)<<'\n';

  cout<<"IMPOSSIBLE"<<'\n';

  return 0;
}