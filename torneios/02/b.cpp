#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  
  while(cin>>n>>m, (n!=0 && m!=0)){
    int v=(n*m)/2;

    if((n*m)%2!=0){
      v++;
    }

    if((m==3 && n==2) || (m==2 && n==3))v++;

    cout<<v<<" knights may be placed on a "<< n <<" row "<< m <<" column board."<<'\n';
  }
  //cout << v << '\n'; 

  return 0;
}