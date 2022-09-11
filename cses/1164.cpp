#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,a,b;cin>>n;vector<int> ans(n);
  vector<pair<pair<int,int>,int>> event;

  int i=0;
  while(n--){
    cin>>a>>b;
    event.push_back({{a,b},i++});
  }

  sort(event.begin(),event.end());

  int qid=1,tam=0;
  priority_queue<pair<int,int>> quartos;
  
  for(auto e:event){
    if(quartos.empty()){
      quartos.push({-e.first.second,qid});
      // cout<<qid<<' ';
      ans[e.second]=qid;
      qid++;
    }else{
      if(-quartos.top().first<e.first.first){
        int idq=quartos.top().second;
        quartos.pop();
        quartos.push({-e.first.second,idq});
        // cout<<idq<<' ';
        ans[e.second]=idq;
      }else{
        quartos.push({-e.first.second,qid});
        ans[e.second]=qid;
        // cout<<qid<<' ';
        qid++;
      }
    }
    tam=max(tam,(int)quartos.size());
  }
  cout<<tam<<'\n';
  for(auto e:ans)cout<<e<<' ';

  return 0;
}