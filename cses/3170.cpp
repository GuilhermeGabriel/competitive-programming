#include "bits/stdc++.h"
using namespace std;

int main(){
  int t,g,o;cin>>t>>g;

  o=(g/2)-t;

  if(o>0){
    cout<<"Faltam "<< o << " bolinha(s)"<<'\n';
  }else{
    cout<<"Amelia tem todas bolinhas!"<<'\n';   
  }

  return 0;
}
