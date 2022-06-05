#include <bits/stdc++.h>
using namespace std;

int n,a,t=0,min_all=1e9;
vector<int> idxs,el;

void search(int k){
  if(k==n){
    int va=0;
    if(idxs.size() > 0){
      for(auto i:idxs)va+=el[i];
      if(va>0)min_all=min(min_all,abs((t-va)-va));
    }
  }else{
    search(k+1);
    idxs.push_back(k);
    search(k+1);
    idxs.pop_back();
  }
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;t+=a;
    el.push_back(a);
  }
  
  search(0);

  cout<<min_all<<'\n';

  return 0;
}

