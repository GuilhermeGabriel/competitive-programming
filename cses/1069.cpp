#include <bits/stdc++.h>

using namespace std;

int main(){
  int m=1,a=1;

  string in;cin>>in;
  for(int i=1;i<in.size();i++){
    if(in[i-1]==in[i]){a++;m=max(m,a);}
    else a=1;
  }

  cout<<m<<'\n';

  return 0;
}
