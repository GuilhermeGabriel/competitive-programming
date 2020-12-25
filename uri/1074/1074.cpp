#include <bits/stdc++.h>

using namespace std;

int main(){s
	int n, in; cin>>n;
	while(n-- && cin>>in){
		if(in==0){
			cout << "NULL" << endl;
			continue;
		}

		if(in%2==0) cout << "EVEN";
		else cout << "ODD";

		if(in>0) cout << " POSITIVE" << endl;
		else cout << " NEGATIVE" << endl;
	}
}