#include "bits/stdc++.h"

using namespace std;

struct Pac{
	int h,m,c;
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,h,m,c,qc=0,ha=0;
	queue<Pac> pacs; Pac tmp; 
	while(cin>>n){
		while(n--){
			cin>>tmp.h>>tmp.m>>tmp.c;
			pacs.push(tmp);
		}

		while(!pacs.empty()){
			Pac p=pacs.front();
			
			while(ha<p.h*60+p.m)ha+=30;
			if(p.h*60+p.m+p.c<ha)qc++;

			pacs.pop();
			ha+=30;
		}

		cout<<qc<<"\n";
		qc=0;ha=0;
	}

	return 0;
}
