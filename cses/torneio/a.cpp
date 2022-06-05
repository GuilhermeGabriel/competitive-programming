#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int in;
  vector<int> v;
  while(cin>>in){
    v.push_back(in);
    sort(v.begin(),v.end());
    if(v.size()%2==0){
      int idx=(v.size()-1);
      int s=v[idx/2]+v[(idx/2)+1];
      cout<<s/2<<'\n';
    }else{
      cout<<v[v.size()/2]<<'\n';
      // cout<<'\n';
    }
  }

  return 0;
}
