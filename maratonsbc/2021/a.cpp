#include "bits/stdc++.h"
using namespace std;
#define ll long long;

struct Bloco{
  int num,cor;
};

bool order(Bloco a, Bloco b){
  return a.num<b.num;
}

int main() {
  vector<Bloco> blocs;
  Bloco tmp;
  vector<int> cor;

  int n,k,a,b;

  cin >> n >> k;

  while(n--){
    cin>>tmp.num>>tmp.cor;
    blocs.push_back(tmp);
    cor.push_back(tmp.cor);
  }

  sort(blocs.begin(),blocs.end(),order);   
   
  /*for(auto e: blocs)cout<<e.num<<" " << e.cor << endl;*/


  for(int i=0;i<blocs.size();i++){
    if(blocs[i].cor!=cor[i]){
      cout<<"N";
      return 0;
    }
  }

  cout<<"Y";

}

