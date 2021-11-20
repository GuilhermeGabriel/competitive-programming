#include "bits/stdc++.h"

using namespace std;

int main(){/*
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);*/
	
	int nums[10]={1,2,3,4,5,6,7,8,9,10};
	int me=0,ma=9,m=4,r;
	cout<<nums[m]<<'\n';
	fflush(stdout);

	while(cin>>r,r!=2){		
		if(r==0)ma=m-1;
		if(r==1)me=m+1;
		m=(ma+me)/2;
		cout<<nums[m]<<'\n';
	}
	return 0;
}
