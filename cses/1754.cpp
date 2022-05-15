#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int t,a,b;cin>>t;

  while(t--){
    cin>>a>>b;

    if(a+b<3){
      cout<<"NO\n";
      continue;
    }

    if(a%2==0 && b%2==0){
      cout<<"NO\n";
      continue;
    }
    
    cout<<"YES\n";
  }


  return 0;
}