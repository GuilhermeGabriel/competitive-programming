#include "bits/stdc++.h"
using namespace std;

int main(){
	int c,a;cin>>c>>a;
	int d=a/(c-1);
	if(a%(c-1)!=0)d++;
	cout<<d<<"\n\n\n\n";
	return 0;
}