#include <bits/stdc++.h>
using namespace std;

struct T{
  double t,i;
};

bool order(T a, T b){
  if(a.t!=b.t)return a.t>b.t;
  return a.i<b.i;
}

int main(){
  int n;cin>>n;
  vector<T> v;T tmp;

  while(n--){
    int q;cin>>q;
    double p,d;

    for(int i=1;i<=q;i++){
      cin>>d>>p;
      tmp.t=p/d;
      tmp.i=i;
      v.push_back(tmp);
    }
    
    sort(v.begin(),v.end(),order);
    for(int k=0;k<(int)v.size();k++){
      cout<<v[k].i;
      if(k!=(int)v.size()-1)cout<<" ";
    }
    cout<<'\n';

    v.clear();

    if(n!=0)cout<<'\n';
  }
}