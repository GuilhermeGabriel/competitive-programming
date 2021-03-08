#include <bits/stdc++.h>

using namespace std;

int main(){
	string ma, me, aux;

	while(cin>>ma>>me&&!(ma=="0"&&me=="0")){
		reverse(ma.begin(), ma.end());
		reverse(me.begin(), me.end());

		if(ma.size()<me.size()){
			aux=ma;
			ma=me;
			me=aux;
		}
			
		int ex=0, q=0;
		for(int i=0;i<ma.size();i++){
				int n1 = ma[i]-'0', n2=me[i]-'0';

				if(i>=me.size()) n2=0;

				if((n2+n1+ex)>=10){
					string exs = to_string(n2+n1+ex);
					ex=exs[0]-'0';
					q++;
					continue;
				}
				ex=0;
		}

		if(q==0)
			cout<<"No carry operation."<<endl;
		else if(q==1)
			cout<<q<<" carry operation."<<endl;
		else
			cout<<q<<" carry operations."<<endl;
	}

	return 0;
}