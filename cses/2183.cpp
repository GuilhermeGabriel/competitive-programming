#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,in;cin>>n;
  vector<int> v;

  while(n--){
    cin>>in;
    v.push_back(in);
  }
  sort(v.begin(),v.end());

  long long soma=0;
  for(int i=0;i<(int)v.size();i++){
    if(soma+1<v[i])break;
    soma+=v[i];
  }
  cout<<soma+1<<'\n';

  // 1 2 2 7 9

  // cs i v[i]  check
  // 0  0  1    0+1<v[i]
  // 1  1  2    1+1<v[i]
  // 3  2  2    3+1<v[i]
  // 5  3  7    5+1<v[i]
  return 0;
}