#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,c=1; cin>>n;
  double v,a=0,f=0,mt=2000;

  while(n--){
    cin>>v;
    cout<<"case "<<c++<<": ";
    
    if(v<180000){
      cout<<0<<'\n';
      continue;
    }else if(v<480000){
      a = max(mt,(0.1*(v-180000)));
      f+= a;
      printf("%.0lf\n",f);
    }else if(v<880000){
      f=30000;
      a = max(mt,(0.15*(v-480000)));
      f+= a;
      printf("%.0lf\n",f);
    }else if(v<1180000){
      f = 30000;
      f += 60000;
      a = max(mt,(0.20*(v-880000)));
      f += a;
      printf("%.0lf\n",f);
    }else {
      f = 30000;
      f += 60000;
      f += 60000;
      a = max(mt,(0.25*(v-1180000)));
      f += a;
      // cout<<fixed<<f<<"\n";
      printf("%.0lf\n",f);

    }
  } 

  return 0;
}