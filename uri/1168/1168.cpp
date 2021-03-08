#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, sum=0; cin>>n;
	int leds_need[10] = {6,2,5,5,4,5,6,3,7,6};
	string in;

	while(n--){
		cin >> in;
		for(int i=0;i<in.size();i++){
			sum += leds_need[in[i] -'0'];
		}
		cout << sum << " leds" << endl;
		sum=0;
	}

	return 0;
}