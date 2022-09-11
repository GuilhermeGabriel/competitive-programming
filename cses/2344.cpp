#include "bits/stdc++.h"
using namespace std;

int main(){
  int nota;cin>>nota;
  char l;

  if(nota==0){
    l='E';
  }else if(nota>=1&&nota<=35){
    l='D';
  }else if(nota>=36&&nota<=60){
    l='C';
  }else if(nota>=61&&nota<=85){
    l='B';
  }else{
    l='A';
  }

  cout<<l<<'\n';

  return 0;
}
