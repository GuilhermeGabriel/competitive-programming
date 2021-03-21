#include <bits/stdc++.h>

using namespace std;

int main(){
	double v, r = 0, lixo;
	char l;

	cin >> l;

	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			if((i + j) <= 10){
				cin >> v;
				r+=v;
			}else{
				cin >> lixo;
			}
		}
	}

	if(l == 'S') {
		cout << r << endl;
	} else {
		cout << setprecision(1) << fixed << r/66 << endl;
	} 

	return 0;
}