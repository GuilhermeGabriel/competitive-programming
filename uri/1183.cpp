#include <bits/stdc++.h>

using namespace std;

int main(){
	double s = 0, in;
	char l; cin >> l;

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin >> in;
			if(j>i)s+=in;
		}
	}

	if(l=='S') cout<<s<<endl;
	else cout << s/66 << endl;
}