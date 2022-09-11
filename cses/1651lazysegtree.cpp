#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
const int MAXN = 2e5+5;
ll seg[4*MAXN];
ll lazy[4*MAXN];
int a[MAXN];

void build(int p,int i,int j){
  if(i==j){
    seg[p]=a[i];
    lazy[p]=0;
  }else{
    int m=(i+j)/2;
    build(2*p,i,m);
    build(2*p+1,m+1,j);
    seg[p]=seg[2*p]+seg[2*p+1];
  }
}

void propaga(int p,int i,int j){
  seg[p]+=ll(j-i+1)*lazy[p];
  if(i!=j){
    lazy[2*p]+=lazy[p];
    lazy[2*p+1]+=lazy[p];
  }
  lazy[p]=0;
}

void update(int p,int i,int j,int a,int b,ll val){
  propaga(p,i,j);
  if(i>b||j<a)return;
  if(a<=i&&j<=b){
    lazy[p]=val;
    propaga(p,i,j);
  }else{
    int m=(i+j)/2;
    update(2*p,i,m,a,b,val);
    update(2*p+1,m+1,j,a,b,val);
    seg[p]=seg[2*p]+seg[2*p+1];
  }
}

ll query(int p,int i,int j,int a,int b){
  propaga(p,i,j);
  if(i>b||j<a)return 0ll;
  if(a<=i&&j<=b)return seg[p];
  int m=(i+j)/2;
  ll L=query(2*p,i,m,a,b);
  ll R=query(2*p+1,m+1,j,a,b);
  return L+R;
}

int main(){
  int n,q;cin>>n>>q;
  for(int i=1;i<=n;i++)cin>>a[i];

  build(1,1,n);

  while(q--){
    int op;cin>>op;
    if(op==1){
      int a,b;ll u;cin>>a>>b>>u;
      update(1,1,n,a,b,u);
    }else{
      int k;cin>>k;
      cout<<query(1,1,n,k,k)<<'\n';
    }
  }

  return 0;
}