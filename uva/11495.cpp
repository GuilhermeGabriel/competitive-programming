#include "bits/stdc++.h"

using namespace std;

int merge_sort(vector<int> &v){
	int inv=0,INF=1e9;
	
	if(v.size()==1)return 0;
	vector<int> u1,u2;
	for(int i=0;i<v.size()/2;i++)u1.push_back(v[i]);
	for(int i=v.size()/2;i<v.size();i++)u2.push_back(v[i]);
	
	inv+=merge_sort(u1);
	inv+=merge_sort(u2);
	
	u1.push_back(INF);
	u2.push_back(INF);
	
	int ini1=0,ini2=0;
	
	for(int i=0;i<v.size();i++){
		if(u1[ini1]<=u2[ini2]){
			v[i]=u1[ini1];
			ini1++;
		}else{
			v[i]=u2[ini2];
			ini2++;
			inv+=u1.size()-ini1-1;
		}
	}
	
	return inv;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,i;vector<int> v;
	while(cin>>n,n){
		while(n--){
			cin>>i;v.push_back(i);
		}
		cout<<((merge_sort(v)%2==0)?"Carlos\n":"Marcelo\n");
		v.clear();
	}

	return 0;
}
