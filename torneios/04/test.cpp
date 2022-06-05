#include <iostream>
using namespace std;

int main(){
  for(int i=10;i<=99;i++){
    int a=i/10,b=i%10;
    string m=to_string((int)(i*i));
    int d=m[0]-'0';
    int e=m[1]-'0';
    int f=m[2]-'0';
    if(((a+b)*(a+b))==(d+e+f)){
      cout<<i<<'\n';
    }
  }

  return 0;
}