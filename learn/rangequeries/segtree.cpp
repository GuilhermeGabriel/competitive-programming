#include "bits/stdc++.h"

using namespace std;

const int N=1e5+7;

int seg[N]

void build(int cur,int l,int r){
	if(l==r)seg[cur]=a[l];
	else{
		int mid=(l+r)/2;
		build(2*cr,l,mid);
		build(2*cr+1,mid+1,r);
		seg[cur]=max(seg[2*cur],seg[2*cur+1]);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);


	

	return 0;
}