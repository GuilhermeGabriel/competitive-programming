#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,m,in;cin>>n>>m;

  multiset<int> vals;

  while(n--){
    cin>>in;vals.insert(in);
  }

  while(m--){
    cin>>in;
    auto v=vals.upper_bound(in);

    if(v==vals.begin()||vals.size()==0){
      cout<<-1<<'\n';
    }else{
      v--;
      cout<<*v<<'\n';
      vals.erase(v);  
    }
  }

/*
3 5 5 7 8
4 8 3
*/

	return 0;
}
