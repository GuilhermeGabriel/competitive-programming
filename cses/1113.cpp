#include <bits/stdc++.h>

using namespace std;

string rotate(string in){
  string r;
  r+=in[in.size()-1];
  r+=in.substr(0,in.size()-1);
  return r;
}

int main(){
  string in,aux;cin>>in;in+='#';
  int s=in.size();
  
  vector<string> strs;
  // strs.push_back(in);
  while(s--){
    in=rotate(in);
    strs.push_back(in);
  }

  sort(strs.begin(),strs.end());

  for(auto e:strs)cout<<e<<'\n';

  cout<<'\n';
  for(auto e:strs)
    if(e[e.size()-1]!='#')
      cout<<e[e.size()-1];*/

  return 0;
}
