#include <bits/stdc++.h>

using namespace std;

int main(){
	double c, n, nota, media, qa; cin >> c;
	vector<double> notas;

	while(c--){
		cin >> n;

		while(n--){
			cin >> nota;
			notas.push_back(nota);
			media+=nota;
		}
		media/=notas.size();

		for(int i=0;i<notas.size();i++){
			if(notas[i]>media)qa++;
		}

		qa/=notas.size();

		cout << setprecision(3) << fixed << qa*100 << "%" << endl; 
		
		media=0;
		qa=0;
		notas.clear();
	}

	return 0;
}