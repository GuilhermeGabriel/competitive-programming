#include <iostream>

using namespace std;

double pot(double x,double y){
	double r=1;
	for(int i=0;i<y;i++)r*=x;
	return r;
}

int main() {
	double x,y,r;
	cin>>x>>y;
	r = pot(x,y);
	cout.precision(4);
	cout<<fixed<<r<<"\n";
	return 0;
}