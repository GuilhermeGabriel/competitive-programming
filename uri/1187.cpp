#include <bits/stdc++.h>

using namespace std;

int main(){
	char l;
	double s = 0, input;
	cin>>l;

	for (int i = 0; i < 12; ++i){
		for (int j = 0; j < 12; ++j){
			if(j>i&&i+j<11){
				cin >> input;
				s+=input;
			}else{
				cin >> input;
			}
		}
	}

	if(l == 'M'){
		cout << setprecision(1) << fixed << s/30 << endl;
	}else{
		cout << setprecision(1) << fixed << s << endl;
	}

	return 0;
}