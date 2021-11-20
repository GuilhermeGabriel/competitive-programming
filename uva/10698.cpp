#include "bits/stdc++.h"

using namespace std;

struct Time{
	string name;
	int p,gp,gf,gs,gd,pe,idx;
};

bool order(Time a,Time b){
	if(a.p!=b.p)return a.p>b.p;
	if(a.gd!=b.gd)return a.gd<b.gd;
	if(a.gf!=b.gf)return a.gf>b.gf;
	string s1;for(auto e:a.name)s1+=tolower(e);
	string s2;for(auto e:b.name)s2+=tolower(e);
	return s1<s2;
}

int main(){
	int t,g;string r;
	map<string,Time> times;
	while(cin>>t>>g,t||g){
		while(t--){
			string na;cin>>na;
			times[na].name=na;
		}	
		while(g--){
			string na,nb;int pa,pb;char _;
			cin>>na>>pa>>_>>pb>>nb;
			times[na].name=na;
			times[na].gf+=pa;
			times[na].gs+=pb;
			times[na].gp++;
			times[na].gd=times[na].gf-times[na].gs;
			if(pa>pb)times[na].p+=3;
			if(pb==pa)times[na].p++;

			times[nb].name=nb;
			times[nb].gf+=pb;
			times[nb].gs+=pa;
			times[nb].gp++;
			times[nb].gd=times[nb].gf-times[nb].gs;
			if(pb>pa)times[nb].p+=3;
			if(pb==pa)times[na].p++;
		}

		vector<Time> vt;
		for(auto e:times)vt.push_back(e.second);
		sort(vt.begin(),vt.end(),order);

		int c=1,tp=vt[0].p;vt[0].idx=c;
		for(int i=1;i<vt.size();i++){
			vt[i].idx=c;
			Time ac=vt[i],an=vt[i-1];
			if(ac.p!=an.p||ac.gd!=an.gd||ac.gf!=an.gf){
				vt[i].idx=++c;tp+=vt[i].p;
			}
		}

		int c2=1;
		Time e=vt[0];
		printf("%2d.",c2);
		printf("%16s %3d %3d %3d %3d %3d",e.name.c_str(),e.p,e.gp,e.gf,e.gs,e.gd);
		cout.precision(2);
		if(e.gp)printf("%7.2lf",e.p*100.0/(e.gp*3));
		else printf("%7s","N/A");

		cout<<'\n';

		for(int i=1;i<vt.size();i++){
			Time e=vt[i];c2++;

			if(e.idx!=vt[i-1].idx)printf("%2d.",c2);
			else cout<<"   ";
			printf("%16s %3d %3d %3d %3d %3d",e.name.c_str(),e.p,e.gp,e.gf,e.gs,e.gd);
			if(e.gp)printf("%7.2lf",e.p*100.0/(e.gp*3));
			else printf("%7s","N/A");
			cout<<'\n';if(g-1==0)cout<<'\n';
		}

		times.clear();
	}

	return 0;
}
