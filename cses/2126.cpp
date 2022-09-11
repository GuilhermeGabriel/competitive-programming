#include "bits/stdc++.h"
using namespace std; 

int main(){
  int n;cin>>n;
  queue<int> circle;

  for(int i=1;i<=n;i++)
    circle.push(i);
  // 1 2 3 4 5 6 7
  // 

  while(!circle.empty()){
    circle.push(circle.front());
    circle.pop();

    cout<<circle.front()<<' ';
    circle.pop();
  }


}