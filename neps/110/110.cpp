#include <iostream>

using namespace std;

int main() {
	int n,v,vant=-1,countrecord=0,countatual=0;
	cin>>n;

	while(n--){
		cin>>v;

		if(v==vant)
			countatual++;
		else
			countatual=1;

		if(countatual>countrecord)
				countrecord=countatual;

		vant=v;
	}

	cout<<countrecord<<"\n";

	return 0;
}