#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  int a,b;
  // map<int,int>

  while(n--){
    cin>>a>>b;
    v.push_back({a,b});
  }
  sort(v.begin(),v.end());

  /*
  2 4
  3 9
  5 8
  */

  int fi=v[0].second,atual,c=0;
  for(int i=1;i<(int)v.size();i++){
    atual=v[i].second;
    if(atual<=fi)c++;
  }
}