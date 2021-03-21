#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string in, r=""; bool isn=true;
	long long ri=0;
	while(getline(cin,in)){
		for(int i=0;i<in.size();i++){
			if(in[i]>='0'&&in[i]<='9'){r+=in[i];continue;}
			if(in[i]=='o'||in[i]=='O'){r+='0';continue;}
			if(in[i]=='l'){r+='1';continue;}
			if(in[i]==' '||in[i]==',')continue;
			if(in[i]<'0'||in[i]>'9'){isn=false;break;}
		}

		for(int i=0;i<r.size();i++)
			if(r[i]!='0'){r=r.substr(i,r.size());break;}

		if(!r.empty()&&isn&&r.size()<=10){
			ri=stoll(r);r="";
			if(ri<=2147483647){
				cout<<ri<<"\n";
				continue;
			}
		}

		cout<<"error\n";r="";isn=true;
	}

	return 0;
}