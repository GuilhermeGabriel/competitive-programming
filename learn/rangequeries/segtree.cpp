#include "bits/stdc++.h"

using namespace std;

const int N=1e5+7;

int a[N],seg[4*N];

void build(int cur,int l,int r){
	if(l==r)seg[cur]=a[l];	
	else{
		int mid=(l+r)/2;
		build(2*cur,l,mid);
		build(2*cur+1,mid+1,r);
		seg[cur]=max(seg[2*cur],seg[2*cur+1]);
	}
}

//[l,r] é o intervalo que estou
//[a,b] é o intervalo de consulta
int query(int cur,int l,int r,int a,int b){
	if(r<a||l>b)return -1e9;
	if(l>=a&&r<=b)return seg[cur];
	int mid=(l+r)/2;
	return max(
		query(2*cur,l,mid,a,b),
		query(2*cur+1,mid+1,r,a,b)
	);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];

	build(1,0,n-1);
	
	int q;cin>>q;
	while(q--){
		int l,r;cin>>l>>r;
		cout<<query(1,0,n-1,l,r)<<'\n';
	}	

	return 0;
}