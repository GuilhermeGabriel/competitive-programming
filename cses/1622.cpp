#include <bits/stdc++.h>
using namespace std;

int main(){
  string in;cin>>in;
  vector<string> vals;

  sort(in.begin(),in.end());

  do {
    vals.push_back(in);
  }while(next_permutation(in.begin(),in.end()));

  cout<<vals.size()<<'\n';
  sort(vals.begin(),vals.end());
  for(auto e: vals)
    cout<<e<<'\n';

	return 0;
}

