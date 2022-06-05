#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

  int n,m,k,in;cin>>n>>m>>k;
  vector<int> pess,aps;
  
  while(n--){
    cin>>in;pess.push_back(in);
  }
  
  while(m--){
    cin>>in;aps.push_back(in);
  }

  sort(aps.begin(),aps.end());
  sort(pess.begin(),pess.end());

  /*
  45 60 60 80 
  30 60 75
  */

  int i=0,j=0,c=0;
  while(i<(int)pess.size() && j<(int)aps.size()){
    if(abs(pess[i]-aps[j])<=k){
      i++;j++;c++;
    }else{
      if(pess[i]<aps[j])i++;
      else j++;
    }
  }

  cout<<c<<'\n';
  
  return 0;
}