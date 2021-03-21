#include <bits/stdc++.h>

using namespace std;

int main(){
	int p1, p2, i=0;
	vector<char> t = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};

	while(cin>>p1>>p2&&t.size()>1){
		if(p1>p2)t.erase(t.begin()+i+1);
		else t.erase(t.begin()+i);

		if(i+1<t.size())i++;
		else i=0;
	}

	cout<<t[0]<<endl;

	return 0;
}