#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,q=0;cin>>n;
	vector<int> m={1,5,10,25,50,100};
	while(n>0){
		while(n>=m.back()){q++;n-=m.back();}
		m.pop_back();
	}
	cout<<q<<"\n";

	return 0;
}