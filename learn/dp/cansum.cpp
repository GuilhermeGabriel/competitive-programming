#include "bits/stdc++.h"

using namespace std;

int memo[1000000];

bool cansum(int s,int q,int *nums){
	if(s==0)return true;
  if(s<0)return false;
  if(memo[s]==1)return true;
	if(memo[s]==-1)return false;
	
	for(int i=0;i<q;i++){
		if(cansum(s-nums[i],q,nums)){
			memo[s]=1;
			return true;
		}
  }
  memo[s]=-1;
  return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int numsin[]={25,10,5,1};
  cout<<cansum(189650,4,numsin);

	return 0;
}
