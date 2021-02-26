#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string in; int f, q=0;
	map<string,int> pts={{"-1",0},{"-2",2},{"-3",1},{"-4",3}};
	queue<string> fila[4];

	while(cin>>in&&in!="0"){
		if(in[0]!='A'){f=pts[in];continue;}
		fila[f].push(in); q++;
	}

	string out;
	for(int t=0;t<q;t++){
		for(int i=0;i<4;i++){
			if(!fila[i].empty()){
				out+=fila[i].front()+" ";
				fila[i].pop();
			}
		}
	}
	out.erase(out.end()-1, out.end());
	cout<<out<<"\n";

	return 0;
}