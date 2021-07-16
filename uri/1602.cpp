/*#include "bits/stdc++.h"

using namespace std;

int mxn=(2e6)+5;
vector<int> sieve(mxn,1);

int calculateprimes(int n){
	for(int p=2;p*p<n;p++){
		if(!sieve[p])continue;
		for(int i=p*2;i<n;i+=p)sieve[i]=false;
	}
}

int quant_div(int n){
	int total=1,count;
	if(sieve[n])return 2;
	for(int p=2;p<=n;p++){
		if(!sieve[p])continue;
		count=0;
    if(n%p==0){
      while(n%p==0){n=n/p;count++;}
      total*=(count+1);
    }
	}
	return total;
}

int main(){
	calculateprimes(mxn-1);
	//cout<<sieve[0];
	//cout<<quant_div(8);
	vector<int> hp(mxn-1,0);

	//[0,1,2,3,4,5,6,7,8,9,10]
	//[0,0,2,2,3,2,4,2,4,3,4]
	cout<<quant_div(2000000);

	/*for(int i=2;i<=mxn-5;i++)
		hp[i]=hp[i-1]+sieve[quant_div(i)];

	cout<<hp[4];	*/

		//	if(sieve[quant_div(i)])q++;

	return 0;
}*/