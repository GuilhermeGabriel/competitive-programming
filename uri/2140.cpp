#include "bits/stdc++.h"
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,m,t,c,notas[6]={2,5,10,20,50,100};
  while(cin>>n>>m,n||m){
    t=m-n;c=1;
    for(int i=0;i<=4&&c;i++){
      for(int j=i+1;j<=5&&c;j++){
        if(notas[i]+notas[j]==t){
          cout<<"possible\n";c=0;
        }
      }
    }
    if(c==1)cout<<"impossible\n";
  }

  return 0;
}