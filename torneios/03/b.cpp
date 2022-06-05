#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  int a,b,r; bool continua;

  int time[2000100];

  while(cin>>m>>n&&!(n==0&&m==0)){
    memset(time,0,sizeof(time));
    continua=true;

    while(m--&&continua){
      cin>>a>>b;
      for(int i=a;i<=b;i++){
        time[i]++;
      }
    }

    while(n--){
      cin>>a>>b>>r;
      for(int k=0;k<=1000001;k+=r){
        for(int i=(a+k);i<=(b+k);i++){
          time[i]++;
        }
      }
    }

    for(int i=0;i<=1000000;i++){
      if(time[i]>1){
        cout<<"CONFLICT"<<'\n';
        break;
      }
    }

    for(int i=0;i<=100;i++)
      cout<<time[i];

    if(continua)cout<<"NO CONFLICT"<<'\n';
  }

}