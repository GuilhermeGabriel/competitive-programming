#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string in, line, out;
  
  while(getline(cin,line)){
    istringstream iss(line);
    out="";
    while(iss >> in){
      reverse(in.begin(),in.end());
      out+=in+' ';
    }
    out.pop_back();
    cout<<out<<'\n';
  }

  return 0;
}
