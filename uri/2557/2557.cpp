#include <bits/stdc++.h>

using namespace std;

int main(){
	string in, r, l, j;
	int pidx, eqidx;

	while(cin>>in){
		for(int i=0;i<in.size();i++){
			if(in[i]=='+')pidx=i;
			if(in[i]=='='){eqidx=i;break;}
		}
		r=in.substr(0,pidx);
		l=in.substr(pidx+1,eqidx-pidx-1);
		j=in.substr(eqidx+1, in.size()-eqidx);
		
		int ir,il,ij;

		if(r[0]=='R'){
			il=stoi(l);
			ij=stoi(j);
			cout<<ij-il<<endl;
			continue;
		}
		
		if(l[0]=='L'){
			ir=stoi(r);
			ij=stoi(j);
			cout<<ij-ir<<endl;
			continue;

		}
		
		if(j[0]=='J'){
			ir=stoi(r);
			il=stoi(l);
			cout<<ir+il<<endl;
			continue;
		}
	}

	return 0;
}