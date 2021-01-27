#include <bits/stdc++.h>

using namespace std;

int main(){
	double n, m; cin>>n>>m;
	double c=30,d=0;

	vector<double> seg_dias;
	while(c--){
		int i; cin>>i;
		seg_dias.push_back(i);
	}

	double sum=0, me=0;
	for(int i=0;i<30;i++)sum+=seg_dias[i];
	while(n<m){
		me=ceil(sum/30);
		sum-=seg_dias[0];
		sum+=me;
		seg_dias.erase(seg_dias.begin());
		//seg_dias.push_back(me);
		n+=me;
		d++;
	}

	cout << d << endl;

	return 0;
}