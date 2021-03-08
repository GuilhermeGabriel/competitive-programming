#include <bits/stdc++.h>

using namespace std;
#define ff first
#define ss second
#define pb push_back
#define vec vector

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	/*
	vec<int> v={5,2,6,8,4,6,9};
	sort(v.rbegin(), v.rend());
	for(int i=0;i<v.size();i++)cout<<v[i]<<"\n";*/

	int n=7, vect[]={6,2,3,5,4,1,7};
	sort(vect,vect+n);
	for(int i=0;i<n;i++)cout<<vect[i]<<"\n";

	return 0;
}