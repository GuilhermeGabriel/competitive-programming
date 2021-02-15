#include <bits/stdc++.h>

using namespace std;
#define ff first
#define ss second
#define pb push_back
#define vec vector

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int vect[]={0,1,2,2,2,3,4,5,6,7,8,9};
	
	/*int a=0,b=9,s=5;
	while(a<=b){
		int m=(a+b)/2;
		if(vect[m]==s){cout<<"find:"<<m;return 0;}
		if(vect[m]>s)b=m-1;
		else a=m+1;
	}
	cout<<"not find";*/

	int k=lower_bound(vect,vect+9,2)-vect;
	if(k<9&&vect[k]==2)cout<<"find: "<<k<<"\n";

	int a=lower_bound(vect,vect+9,2)-vect;
	int b=upper_bound(vect,vect+9,2)-vect;
	cout<<"quant elems 2: "<<b-a<<"\n";

	auto r=equal_range(vect,vect+9,2);
	cout<<"quant elems 2: "<<r.second-r.first<<"\n";

	return 0;
}