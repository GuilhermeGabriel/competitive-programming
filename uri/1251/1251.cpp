#include <bits/stdc++.h>

using namespace std;

struct Caract{
	int value, q;
};

bool order(Caract c1, Caract c2){
	if(c1.q!=c2.q) return c1.q<c2.q;
	return c1.value>c2.value;
}

int main(){
	string in; bool p=false;
	Caract tmp;
	vector<Caract> v;

	while(cin>>in){
		for(int i=0;i<in.size();i++){
			tmp.value=in[i]-0;
			tmp.q=1;

			int j; bool find=false;
			for(j=0;j<v.size()&&!find;j++){
				if(v[j].value==tmp.value)find=true;
			}
			if(find)v[j-1].q+=1;
			else v.push_back(tmp);
		}

		sort(v.begin(), v.end(), order);
		for(int i=0;i<v.size();i++){
			if(i==0&&p)cout<<endl; p=true;
			cout<<v[i].value<<" "<<v[i].q<<endl;
		}
		v.clear();
	}

	return 0;
}
