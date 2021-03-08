#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, s, e, t=0, tx; cin>>n;

	while(n--){
		cin>>s>>e;

		if(s<e){
			for(int i=s+1;i<e;i++){
				if(i%2!=0) t+=i;
			}
		}else{
			for(int i=e+1;i<s;i++){
				if(i%2!=0) t+=i;
			}
		}
		
		cout<<t<<endl;
		t=0;
	}

	return 0;
}