#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,somad,somae,q,in;cin>>n;
  vector<int> coins;

  while(n--){
    cin>>q;
    somad=somae=0;coins.clear();

    while(q--){
      cin>>in;
      somad+=in;
      coins.push_back(in);
    }
    
    sort(coins.begin(),coins.end());
    
    int best=INT_MAX;
    for(int i=0;i<(int)coins.size();i++){
      somae+=coins[i];
      somad-=coins[i];
      best=min(best,abs(somae-somad));
    }

    cout<<best;

    cout<<'\n';
  }


  return 0;
}