#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,s=0;
  while(cin>>n){
    s=((n-1)*(n-2))/2;
    cout<<s+1<<'\n';
  }
}