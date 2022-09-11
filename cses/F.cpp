#include "bits/stdc++.h"
using namespace std;
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t,n,h;cin>>t;
  while(t--){
    cin>>n>>h;
    vector<int> num;

    for(int i=0;i<n-h;i++)
      num.push_back(0);
    for(int i=n-h;i<n;i++)
      num.push_back(1);

    do{
      for(auto e:num)cout<<e;
      cout<<'\n';
    }
    while(next_permutation(num.begin(),num.end()));    

    num.clear();

    if(t>0)cout<<'\n';
  }

  return 0;
}