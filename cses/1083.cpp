#include "bits/stdc++.h"

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n,i,s;
  cin>>n;s=((1+n)*n)/2;n-=1;
  while(n--){cin>>i;s-=i;}
  cout<<s<<'\n';

  return 0;
}