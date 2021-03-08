#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i, qd=0; cin>>n;

	while(n--){
		cin>>i;
		
		bool isprimo = true;
		for(int j=1;j<=i&&isprimo;j++){
			if(i%j==0)qd++;
			if(qd>2||i==1)isprimo=false;
		}
		
		cout << i << ((isprimo) ? " eh primo" :" nao eh primo") << endl; 
		qd=0;
	}

	return 0;
}