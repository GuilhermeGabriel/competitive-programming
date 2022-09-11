#include "bits/stdc++.h"
using namespace std;

int main(){
  int n,p;cin>>n>>p;
  deque<int> times(n);

  for(int i=0;i<n;i++){
    cin>>times[i];
  }

  sort(times.begin(),times.end());

  long long st=0,q=0;
  while(q<p){
    st+=times.front();
    q++;
    times.push_back(times.front());
    times.pop_front();
  }

  cout<<st<<'\n';

  return 0;
}



