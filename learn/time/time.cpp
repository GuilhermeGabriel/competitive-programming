#include <bits/stdc++.h>

using namespace std;

int main(){
	time_t start,end;
	time(&start);

	ios_base::sync_with_stdio(false);cin.tie(nullptr);

	for(int i=0;i<10000;i++)
		for(int j=0;j<10000;j++);
	
	time(&end);
	double t=double(end-start);
  cout<<t<<"sec"<<setprecision(5)<<fixed<<"\n";

	return 0;