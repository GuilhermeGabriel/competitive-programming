#include <bits/stdc++.h>

using namespace std;

vector<int> verts[27];
vector<char> letters, result;
int comp[27];

void dfs(int v){
	for(int x: verts[v]){
		if(comp[x]!=-1)continue;
		char l='a'+x-1;
		result.push_back(l);
		comp[x]=1;
		dfs(x);
	}
}

int main(){
	int n,lt,qa,c=0;cin>>n;

	while(n--){
		cin>>lt>>qa;
		for(int s='a';s<'a'+lt;s++)letters.push_back(s);
		for(int i=1;i<=26;i++)comp[i]=-1;

		char v1,v2;
		while(qa--){
			cin>>v1>>v2;
			verts[v1-'a'+1].push_back(v2-'a'+1);
			verts[v2-'a'+1].push_back(v1-'a'+1);
		}

		int cc=0;
		cout<<"Case #"<<++c<<":"<<endl;
		char s=letters.front();
		while(letters.size()>0){
			int la=s-'a'+1;
			comp[la]=1; result.push_back(s);
			dfs(la);
			sort(result.begin(), result.end());
			for(int i=0;i<result.size();i++){
				cout<<result[i]<<",";

				for(int j=0;j<letters.size();j++)
					if(result[i]==letters[j])
						letters.erase(letters.begin()+j);
			}
			s=letters.front();
			cout<<"\n";
			result.clear();
			cc++;
		}
		cout<<cc<<" connected components\n\n";

		letters.clear();
		for(int i=1;i<=26;i++)comp[i]=-1;
		for(int i=1;i<=27;i++)verts[i].clear();
	}

	return 0;
}