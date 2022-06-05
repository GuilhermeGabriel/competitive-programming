#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int,int>> v;
    int n,a,b;cin>>n;
    while(n--){
      cin>>a>>b;v.push_back({b,a});
    }
    sort(v.begin(),v.end());
  
    int l=0,c=0,i,f;
    for(auto e:v){
      i=e.second,f=e.first;
      if(i>=l){
        c++;
        l=f;
      }
    }

    cout<<c<<'\n';

    return 0;
}
