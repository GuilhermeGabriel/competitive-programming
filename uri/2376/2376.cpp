#include <bits/stdc++.h>

using namespace std;

int main(){
	int p1, p2;
	vector<char> t = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
	vector<int> g;

	/*a b c d e f g h

	a b c d*/

	for(int i=0;i<16;i++){
		cin>>p1>>p2;
		g.push_back(p1>p2);
	}

	for (int i=0;i<=8;i+=2){
		if(g[i]) t.erase(t.begin()+i+1);
		else t.erase(t.begin()+i);

		g.erase(g.begin()+i);
	}

	for (int i=0;i<=4;i+=2){
		if(g[i]) t.erase(t.begin()+i+1);
		else t.erase(t.begin()+i);

		g.erase(g.begin()+i);
	}

	for (int i=0;i<=2;i+=2){
		if(g[i]) t.erase(t.begin()+i+1);
		else t.erase(t.begin()+i);

		g.erase(g.begin()+i);
	}

  for(int i=0;i<(int)t.size();i++) cout<<t[i];

	return 0;
}