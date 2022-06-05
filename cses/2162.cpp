#include <bits/stdc++.h>
using namespace std;

void josephus(vector<int> &v, int k, int index){
  if(v.size()==1){
    cout<<v[0]<<"\n";
    return;
  }

  index = (index+k) % v.size();
  cout<<v[index]<<' ';
  v.erase(v.begin()+index);
  josephus(v,k,index);
}

int main(){
  int n;cin>>n;
  vector<int> val;

  for(int i=1;i<=n;i++){
    val.push_back(i);
  }
  
  josephus(val,1,0);

  return 0;
}