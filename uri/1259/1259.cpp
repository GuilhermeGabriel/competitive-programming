#include <bits/stdc++.h>

using namespace std;

bool orderDesc(int n1, int n2){
	return n1>n2;
}

int main(){
	int n, in; cin >> n;
	vector<int> numsImp, numsPar;

	while(n--){
		cin >> in;
		if(in%2==0) numsPar.push_back(in);
		else numsImp.push_back(in);
	}

	sort(numsPar.begin(), numsPar.end());
	sort(numsImp.begin(), numsImp.end(), orderDesc);

	for (int i = 0; i < numsPar.size(); ++i){
		cout << numsPar[i] << endl;
	}

	for (int i = 0; i < numsImp.size(); ++i){
		cout << numsImp[i] << endl;
	}		
		
	return 0;
}