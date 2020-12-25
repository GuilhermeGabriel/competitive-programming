#include <bits/stdc++.h>

using namespace std;

struct Seg {
	int p;
};

int main(){
	int qseg, qlig; cin >> qseg >> qlig;

	vector<Seg> segs;
	for (int i = 0; i < qseg; ++i) {
		Seg s = {2};
		segs.push_back(s);
	}

	while(qlig--){
		int asegl, asegr; cin >> asegl >> asegr;
		segs[asegl-1].p--;
		segs[asegr-1].p--;		
	}

	int result = 0;
	for (int i = 0; i < segs.size(); ++i) result+=segs[i].p;
	
	if(result == 2) cout << "COMPLETO" << endl;
	else cout << "INCOMPLETO" << endl;

	return 0;
}