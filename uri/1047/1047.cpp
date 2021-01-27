#include <bits/stdc++.h>

using namespace std;

int main(){
	int hi, mi, hf, mf;
	cin>>hi>>mi>>hf>>mf;

	int qm=(hf*60+mf)-(hi*60+mi);
	if(qm<0) qm=1440+qm;
	int h=qm/60;
	int m=qm%60;

	if(h==0&&m==0)
		cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
	else
		cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;

	return 0;
}