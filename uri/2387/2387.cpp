#include <bits/stdc++.h>

using namespace std;

struct Cpm{
	int s,e;
};

bool order(Cpm a, Cpm b){
	if(a.e!=b.e)return a.e<b.e;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;cin>>n;
	Cpm cs[n];

	for(int i=0;i<n;i++)
		cin>>cs[i].s>>cs[i].e;

	sort(cs,cs+n,order);

	int r=1,s,e,ea=cs[0].e;
	for(int i=0;i<n;i++){
		s=cs[i].s;
		e=cs[i].e;
		if(s>=ea){
			r++;
			ea=e;
		}
	}

	cout<<r<<"\n";

	return 0;
}