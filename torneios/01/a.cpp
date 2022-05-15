#include <bits/stdc++.h>

using namespace std;

int vals[10000],length[10000];
int algo(int n){
  int k=1;
  while(n!=1){ 
    if(n%2==0){
      n/=2;
      k++;
    }else{
      n=(3*n)+1;
      k++;
    }
  }
  return k;
}

int main(){
  int n,m,maior=0;
  while(cin>>n>>m){
    for(int i=n;i<=m;i++){
      maior=max(algo(i),maior);
    }
    cout<<n<<' '<<m<<' '<<maior<<'\n';
    maior=0;
  }

  return 0;
}