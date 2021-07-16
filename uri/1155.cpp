#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	double s=1;
	for(double i=1;i<100;i++)s+=1/(i+1);
	cout.precision(2);
	cout<<fixed<<s<<'\n';

	return 0;
}