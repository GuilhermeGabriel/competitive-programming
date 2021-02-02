#include <bits/stdc++.h>

using namespace std;

struct Pt{
	string p1,p2,p3;
};

int main(){
	int n;cin>>n;
	string name,p1,p2,p3;
	map<string, Pt> esp;
	Pt tmpPt;

	while(n--){
		cin>>name>>tmpPt.p1>>tmpPt.p2>>tmpPt.p3;
		esp[name]=tmpPt;

		if(n==0){
			string pe,pr;
			while(cin>>pe>>pr){
				Pt ptr=esp[pe];
				if(ptr.p1==pr||ptr.p2==pr||ptr.p3==pr)
					cout<<"Uhul! Seu amigo secreto vai adorar o/";
				else
					cout<<"Tente Novamente!";
				cout<<endl;
			}
		}
	}

	return 0;
}