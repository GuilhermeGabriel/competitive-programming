/*#include <bits/stdc++.h>

using namespace std;

int memo[10000];
int v[]={0,1,2,4,0};

int MSC(int *A, int i){
	if(i==0)return 1;
	if(memo[i])return memo[i];
	int maior=-1e9;
	for(int j=0;j<i;j++){
		if(v[j]<v[i]){
			maior=max(maior,MSC(A,j)+1);
		}
	}
	memo[i]=maior;
	return maior;
}

int main(){
	int n,c,qa,qmss;
	cin>>n>>ws;c=n;

	while(n--){
		if(n!=c-1)cout<<"\n";

		string in;qa=qmss=0;memo[0]=1;
		while(getline(cin,in)){
			if(in.size()<2)break;
			mss[qmss]=stoi(in);
			qmss++;
		}

		qa=MSC(mss,qmss-1);
		cout<<"Acertos: "<<qa<<"\n\n";
		vector<int> r(qa+1);
		for(int i=0;i<qmss;i++)
			r[memo[i]]=mss[i];
		for(int i=1;i<(int)r.size();i++)
			cout<<r[i]<<"\n";
		
		for(int i=0;i<100000;i++){
			memo[i]=0;
			mss[i]=0;
		}
	}

	return 0;
}*/