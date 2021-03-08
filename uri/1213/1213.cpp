#include <bits/stdc++.h>

using namespace std;

int main(){
	long long in; string n1="1";

	while(cin>>in){
		while(stoll(n1)%in!=0)n1+="1";
		cout<<n1.size()<<endl;
		n1="1";
	}

	return 0;
}