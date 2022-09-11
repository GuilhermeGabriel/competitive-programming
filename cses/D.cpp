#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,in;

  while(cin>>n,n!=0){
    int a=0,maior=0;
    while(n--){
      cin>>in;
      a+=in;
      if(a<0)a=0;
      maior=max(a,maior);
    }

    if(maior>0){
      cout<<"The maximum winning streak is "<<maior<<".\n";
    }else{
      cout<<"Losing streak."<<'\n';
    }
    // cout<<max<<'\n'
  }

  return 0;
}