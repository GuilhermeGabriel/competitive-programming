#include <bits/stdc++.h>

using namespace std;

bool isp(int n){
	if(n<2)return false;
	for(int i=2;i*i<=n;i++)if(n%i==0)return false;
	return true;
}

int qd(int n){
	int q=0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			if(n/i==i)q++;
			else q+=2;
		}
	}
	return q;
}

vector<int> factors(int n) {
	vector<int> f;
	for (int x = 2; x*x <= n; x++) {
		while (n%x == 0) {
			f.push_back(x);
			n /= x;
		}
	}
	if (n > 1) f.push_back(n);
	return f;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,q=0;

	while(cin>>n){
		for(int i=2;i<=n;i++){
			if(isp(qd(i)))q++;
		}
		cout<<q<<"\n";q=0;
	}

	return 0;
}
