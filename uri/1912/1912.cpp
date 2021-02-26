#include <bits/stdc++.h>

using namespace std;

double soma_a(double h,vector<double> &v){
	double soma=0;
	for(auto ht: v)if(ht>h)soma+=ht-h;
	return soma;
}

void bs(vector<double> &v,double l,double r,double a){
	double hc=(l+r)/2.0;
	double s=soma_a(hc,v);

	if(fabs(s-a)<0.00001){
		cout<<setprecision(4)<<fixed<<hc<<"\n";
		return;
	}
	
	if(s>a)bs(v,hc,r,a);
	else bs(v,l,hc,a);
}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double n,a,att,i; vector<double> t;
	while(cin>>n>>a&&n||a){
		while(n--){
			cin>>i; t.push_back(i);
		}

		att=soma_a(0,t);
		if(att<a){cout<<"-.-\n";}
		else if(att==a){cout<<":D\n";}
		else{
			sort(t.begin(), t.end());
			bs(t,0,t.back(),a);
		}

		t.clear();
	}
	
	return 0;
}