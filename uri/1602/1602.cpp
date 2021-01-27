#include <bits/stdc++.h>

using namespace std;

bool isp(int n){
	if(n==0||n==1)return false;
	bool ip=true;
	for(int i=2;i<=sqrt(n)&&ip;i++){
		if(n%i==0)ip=false;
	}
	return ip;
}

int qd(int n){
	int q=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(n/i==i)q++;
			else q+=2;
		}
	}
	return q;
}

int main(){
	int n;

	while(cin>>n){
		int q=0;
		for(int i=2;i<=n;i++){
			if(isp(qd(i))) q++;
		}
		cout<<q<<endl;
	}

	return 0;
}