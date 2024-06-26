#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
const int MAXN = 2e5 + 5;
int a[MAXN];
ll seg[4*MAXN];

void build(int p,int i, int j){
  if(i==j)seg[p]=a[i];
  else{
    int m=(i+j)/2;
    build(2*p,i,m);
    build(2*p+1,m+1,j);
    seg[p]=min(seg[2*p],seg[2*p+1]);
  }
}

ll query(int p,int i,int j,int l,int r){
  if(i>=l&&j<=r)return seg[p];
  if(j<l||i>r)return 1e18;
  
  int m=(i+j)/2;
  ll L=query(2*p,i,m,l,r);
  ll R=query(2*p+1,m+1,j,l,r);

  return min(L,R);
}

void update(int p,int i,int j,int idx,int x){
  if(i==j)seg[p]=x;
  else{
    int m=(i+j)/2;
    if(idx<=m)update(2*p,i,m,idx,x);
    else update(2*p+1,m+1,j,idx,x);

    seg[p]=min(seg[2*p],seg[2*p+1]);
  }
}

int main(){
  int n,q;cin>>n>>q;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }

  build(1,1,n);

  while(q--){
    int op,x,y;cin>>op>>x>>y;
    if(op==1)update(1,1,n,x,y);
    else cout<<query(1,1,n,x,y)<<'\n';
  }

  return 0;
}