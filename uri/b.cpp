#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, qb=0; cin >> n;
	int stt[] = {0,0,0,0}, hstt[]={8,4,6,12};

	while(n--){
		int quantH;
		string nome,setor;
		cin >> nome >> setor >> quantH;
		if(setor=="bonecos") stt[0]+=quantH;
		if(setor=="arquitetos") stt[1]+=quantH;
		if(setor=="musicos") stt[2]+=quantH;
		if(setor=="desenhistas") stt[3]+=quantH;
	}

	for(int i=0;i<4;i++) qb+=stt[i]/hstt[i];
	cout << qb << endl;

	return 0;
}