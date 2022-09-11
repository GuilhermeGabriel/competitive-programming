#include "bits/stdc++.h"
using namespace std;

const int MAXN = 1e5 + 5;
int a[MAXN];
int seg[4*MAXN];

void build(int p,int i, int j){
  if(i==j)seg[p]=a[i];
  else{
    int m=(i+j)/2;
    build(2*p,i,m);
    build(2*p+1,m+1,j);
    seg[p]=seg[2*p]+seg[2*p+1];
  }
}

// p: no atual
// [i,j]: intervalo q o atual representa
// [l,r]: intervalo q a consulta quer
int query(int p,int i,int j,int l,int r){
  if(i>=l&&j<=r)return seg[p];
  if(j<l||i>r)return 0;
  
  int m=(i+j)/2;
  int L=query(2*p,i,m,l,r);
  int R=query(2*p+1,m+1,j,l,r);

  return L+R;
}

void update(int p,int i,int j,int idx,int x){
  if(i==j)seg[p]=x;
  else{
    int m=(i+j)/2;
    if(idx <= m)update(2*p,i,m,idx,x);
    else update(2*p+1,m+1,j,idx,x);

    seg[p]=seg[2*p]+seg[2*p+1];
  }
}

int main(){
  int n,q;cin>>n>>q;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }

  build(1,1,n);
  // for(int i=0;i<=4*n;i++)
    // cout<<seg[i];

  while(q--){
    int op,x,y;cin>>op>>x>>y;
    // cout<<op<<x<<y<<'\n';
    if(op==1)update(1,1,n,x,y);
    else cout<<query(1,1,n,x,y)<<'\n';
  }

  return 0;
}