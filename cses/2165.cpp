#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> movs;

void torre_hanoi(int n,int from,int to,int aux){
  if(n==0)return;
  torre_hanoi(n-1,from,aux,to);
//  cout<<from<<' '<<to<<'\n';
  movs.push_back({from,to});
  torre_hanoi(n-1,aux,to,from);
}

int main(){
  int n;cin>>n;
  
  torre_hanoi(n,1,3,2);
  cout<<movs.size()<<'\n';
  for(auto e:movs)
    cout<<e.first<<' '<<e.second<<"\n";

	return 0;
}

