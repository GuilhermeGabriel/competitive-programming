#include "bits/stdc++.h"
using namespace std;

vector<string> codes;

void generate(int n,string s){
  if(n==0){
    string gc;gc+=s[0];
    for(int i=1;i<(int)s.size();i++){
      if(s[i]!=s[i-1])gc+='1';
      else gc+='0';
    }
    codes.push_back(gc);
  }else{
    generate(n-1,s+'0');
    generate(n-1,s+'1');
  }
}

int main(){
  int n;cin>>n;
  generate(n-1,"0");
  generate(n-1,"1");

  for(auto e:codes)cout<<e<<'\n';

	return 0;
}