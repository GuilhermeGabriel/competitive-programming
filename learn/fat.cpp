#include "bits/stdc++.h"

using namespace std;
using namespace std::chrono;

long long fat(int n){
	if(n==0)return 1;
	else return n*fat(n-1);
}

long long fatt[10000];
void fatc(){
	fatt[0]=1;
	for(int i=1;i<10000;i++)
		fatt[i]=fatt[i-1]*i;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	auto start = high_resolution_clock::now();

	/*
	cout<<fat(20)<<'\n';
	cout<<fat(21)<<'\n';
	cout<<fat(22)<<'\n';
	cout<<fat(23)<<'\n';
	cout<<fat(24)<<'\n';
	*/

	fatc();
	cout<<fatt[15]<<'\n';
	cout<<fatt[20]<<'\n';
	cout<<fatt[21]<<'\n';
	cout<<fatt[22]<<'\n';
	cout<<fatt[23]<<'\n';
	cout<<fatt[24]<<'\n';
	cout<<fatt[25]<<'\n';


	auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << duration.count() << " ys" << endl;

	return 0;
}
