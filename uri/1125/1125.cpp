#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define vec vector

struct Piloto{
	int id, p=0;
};

bool order(Piloto a, Piloto b){
	if(a.p!=b.p)return a.p>b.p;
	return a.id<b.id;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int g,p,i,s,k,ps;
	while(cin>>g>>p&&g||p){
		vec<int> ordem[p];
		while(g--){
			for(int j=1;j<=p;j++){cin>>i; ordem[i-1].pb(j);}
		}
		cin>>s; vec<Piloto> pilotos(p);
		while(s--){
			cin>>k;
			for(int i=0;i<k;i++){
				cin>>ps;
				for(int j : ordem[i]){
					pilotos[j-1].p+=ps;
					pilotos[j-1].id=j;
				}
			}
			sort(pilotos.begin(),pilotos.end(),order);

			cout<<pilotos[0].id;
			for(int i=1;i<pilotos.size();i++){
				if(pilotos[i].p!=pilotos[i-1].p)break;	
				cout<<" "<<pilotos[i].id;
			}

			cout<<"\n";
			pilotos.clear();
			pilotos.resize(p);
		}
	}
	

	return 0;
}