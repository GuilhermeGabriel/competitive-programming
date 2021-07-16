#include "bits/stdc++.h"

using namespace std;

int contar(vector<int> &mo,int m,int n){
	if(n==0)return 1;
	if(n<0)return 0;
	if(m<=0&&n>=1)return 0;
	return contar(mo,m-1,n)+contar(mo,m,n-mo[m-1]);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> mo={1,3,4};
	cout<<contar(mo,mo.size(),8);
	//cout<<'a';

	return 0;
}