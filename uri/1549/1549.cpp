#include <bits/stdc++.h>

using namespace std;

double vt(int b,int B,int H){
	return ((2*acos(0.0)*H)/3)*((B*B)+(B*b)+(b*b));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cout<<vt(5,6,8);
	

	return 0;
}