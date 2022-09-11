#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,tam,idx;
  string in,aux;

  while(cin>>n && (n!=0), cin>>in){
    // cout<<n<<in<<'\n';
    tam=in.size();
    idx=0;n=tam/n;
    while(tam>0){
      for(int i=0;i<n;i++){
        aux+=in[idx++];
        tam--;
      }

      reverse(aux.begin(),aux.end());
      cout<<aux;      

      aux="";
    }

    cout<<'\n';
  }

  return 0;
}