#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int n, i, qd=0; cin>>n;

	while(n--){
		cin>>i;
		
		if(i==0||i==1){
			cout << "Not Prime" << endl;
			continue;
		}

		bool isprimo = true;
		for(int j=2;j<=sqrt(i)&&isprimo;j++){
			if(i%j==0)isprimo=false;
		}
		
		cout << ((isprimo) ? "Prime" :"Not Prime") << endl; 
	}

	return 0;
}