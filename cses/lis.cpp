#include "bits/stdc++.h"
using namespace std;

int lis(vector<int> vals){
  vector<int> len(200010,0);
  int maior=INT_MIN;
  len[0]=1;
  for(int m=1;m<(int)vals.size();m++){
    len[m]=1;

    for(int i=m-1;i>=0;i--){
      int pos=upper_bound(len.begin(),len.end());
      /*if(vals[i]<vals[m] && len[i]+1>len[m]){
        len[m]=len[i]+1;
        maior=max(len[m],maior);
      }*/
    }
  }

  // int maior=INT_MIN;
  // for(int i=0;i<(int)vals.size();i++){
  //   // cout<<len[i]<<' ';
  //   maior=max(maior,len[i]);
  // }
  return maior;
}


int main(){
  int n,in;cin>>n;
  vector<int> v;

  while(n--){
    cin>>in;v.push_back(in);
  }

  cout<<lis(v)<<'\n';
  
  return 0;
}