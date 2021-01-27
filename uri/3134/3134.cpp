#include <bits/stdc++.h>

using namespace std;

int main(){
	double n=4, i; 
	vector<double> p;

	while(n--){
		cin >> i;
		p.push_back(i);
	}

	if(p[0]==p[1]+p[2]+p[3]){
		cout << "YES";
		return 0;
	}

	if(p[0]==p[1]+p[2]+p[3]){
		cout << "YES";
		return 0;
	}

	if(p[1]==p[0]+p[2]+p[3]){
		cout << "YES";
		return 0;
	}

	if(p[2]==p[0]+p[1]+p[3]){
		cout << "YES";
		return 0;
	}

	if(p[3]==p[0]+p[1]+p[2]){
		cout << "YES";
		return 0;
	}

	if(p[0]+p[1]==p[2]+p[3]){
		cout << "YES";
		return 0;
	}

	if(p[0]+p[2]==p[1]+p[3]){
		cout << "YES";
		return 0;
	}

	if(p[0]+p[3]==p[1]+p[2]){
		cout << "YES";
		return 0;
	}

	cout << "NO";

	return 0;
}


