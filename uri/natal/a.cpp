#include <bits/stdc++.h>

using namespace std;

int main(){
	int b=0, g; cin>>b>>g;
	int qb;

	qb = g/2;
	if(qb%2!=0) qb++;

	if(b>=qb){
		cout << "Amelia tem todas bolinhas!" << endl;
		return 0;
	}

	cout << "Faltam "<< qb-b <<" bolinha(s)" << endl;

	return 0;
}