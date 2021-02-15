#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, q=0; cin>>n;
	while(q!=6){
		if(n%2!=0){
			cout<<n<<"\n";
			q++;
			n++;
		}else n++;
	}

	return 0;
}