#include <bits/stdc++.h>

using namespace std;

int main() {
	int q=0, T; cin >> T;
	string cmds; cin >> cmds;

	for(int i=0; i<cmds.size(); i++){
		if(cmds[i]=='P')q+=2;
		if(cmds[i]=='C')q+=2;
		if(cmds[i]=='A')q+=1;
	}

	cout << q << endl;

	return 0;
}