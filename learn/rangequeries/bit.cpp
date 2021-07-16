#include "bits/stdc++.h"

using namespace std;

const int N=1e5+7;
int a[N],bit[N];

int query(int i){
  int sum=0;
  for(i++;i>0;i-=i&(-i)){
     sum+=bit[i];
  }
  return sum;
}

int query(int l,int r){
  return query(r)-query(l-1);
}

int update(int i,int x){
  for(i++; i<N; i+=i&(-i)){
    bit[i]+=x;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;cin>>n;

  for(int i=0;i<n;i++){
    cin>>a[i];
    update(i,a[i]);
  }

  //responder queries
  int q; cin>>q;
  while(q--){
    int op;cin>>op;
    if(op==1){
      int l,r;cin>>l>>r;
      cout<<query(l,r)<<'\n';
    }else{
      int i,x;cin>>i>>x;
      update(i,-a[i]);
      a[i]=x;
      update(i,a[i]);
    }
  }

  return 0;
}