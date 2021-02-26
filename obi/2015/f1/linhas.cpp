#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,c=0;cin>>n;
	int lin[n];
  for(int i=0;i<n;i++)cin>>lin[i];

  int i;
  for(i=0;i<n;i++){
    for(int j=i+1;j<=n-1;j++){
      if(lin[j]<lin[i])c++;
    }
  }  
  
  cout<<c<<"\n";

	return 0;
}