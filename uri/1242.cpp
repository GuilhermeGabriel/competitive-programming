#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string in; int b,s,c,f,q;
	while(cin>>in){
		b=s=c=f=q=0;

		for(int i=0;i<in.size();i++){
			if(in[i]=='B')b++;
			if(in[i]=='S')s++;
			if(in[i]=='C')c++;
			if(in[i]=='F')f++;
		}

		if(b>s)q+=b-(b-s);
		else q+=s-(s-b);

		if(c>f)q+=c-(c-f);
		else q+=f-(f-c);

		cout<<q<<"\n";		
	}

	return 0;
}