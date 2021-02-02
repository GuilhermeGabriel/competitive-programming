#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, nc, i, a=0, b=0, c=0; cin>>n;
	int comps[5]={0};

	while(n--){
		cin>>i;
		comps[i-1]++;

		if(comps[0]>0&&comps[2]>0&&comps[4]>0){
			a++;
			comps[0]--;
			comps[2]--;
			comps[4]--;
			continue;
		}

		if(comps[0]>0&&comps[3]>0){
			b++;
			comps[0]--;
			comps[3]--;
			continue;
		}

		if(comps[1]>0&&comps[3]>0){
			c++;
			comps[1]--;
			comps[3]--;
			continue;
		}
	}

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;


	return 0;
}