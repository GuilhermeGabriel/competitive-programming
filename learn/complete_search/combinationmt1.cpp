#include <bits/stdc++.h>

using namespace std;

int vector<int> permutation;

void search(){
	if(permutation.size()==n){

	}else{
		for (int i = 0; i < n; i++) {
			if (chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(i);
			search();
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	

	return 0;
}