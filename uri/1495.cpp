#include "bits/stdc++.h"

using namespace std;

struct Jogo{
	int m,s;
};

bool order(Jogo a, Jogo b){
	int da=abs(a.m-a.s), db=abs(b.m-b.s);
	if(da!=db)return da<db;
}

int calp(int a,int b){
	if(a>b)return 3;
	if(a==b)return 1;
	if(a<b)return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,g,m,s;
	vector<Jogo> jogos;Jogo tmp;
	
	while(cin>>n>>g){
		while(n--){
			cin>>tmp.m>>tmp.s;
			jogos.push_back(tmp);
		}

		sort(jogos.begin(),jogos.end(),order);
		//for(auto e:jogos)cout<<e.m<<e.s<<'\n';
		int p=0,a=0;
		for(int i=0;i<jogos.size();i++){
			if(g>0){
				if(jogos[i].m-jogos[i].s>0){p+=3;continue;}
				int d=abs(jogos[i].m-jogos[i].s);
				//if(d==0){a=1;g--;goto sum;}
				if(g>d){a=d+1;g-=a;}
				else {a=g;g=0;}
				/*while(d&&g){
					a++;
					g--;
					d--;
				}*/
			}
			else a=0;
			sum:
			p+=calp(jogos[i].m+a,jogos[i].s);
			a=0;
		}
		cout<<p<<'\n';
		jogos.clear();
	}
	

	return 0;
}