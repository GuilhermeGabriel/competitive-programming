#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,w,in;cin>>n>>w;
  vector<int> p;

  while(n--){
    cin>>in;
    p.push_back(in);
  }

  sort(p.rbegin(),p.rend());

  int i=0,j=p.size()-1,c=0;
  while(i<=j){
    // cout<<i<<'\n';
    if(p[i]+p[j]<=w){i++;j--;c++;continue;}
    if(p[i]<=w){i++;c++;continue;}
    if(p[i]>w){i++;continue;}
  }

  cout<<c<<'\n';

  return 0;
}