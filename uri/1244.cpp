#include <bits/stdc++.h>

using namespace std;

struct Word{
	string w;
	int pos;
};

bool order(Word a, Word b){
	if(a.w.size()!=b.w.size())return a.w.size()>b.w.size();
	return a.pos<b.pos;
}

int main(){
	int n; cin>>n;
	string in, word;
	Word tmp;
	vector<Word> words;

	cin.ignore();
	while(n--){
		getline(cin, in);
		istringstream ss(in);
		int i=0;
		while(ss>>word){
			tmp.w=word;
			tmp.pos=i;i++;
			words.push_back(tmp);
		}
		sort(words.begin(), words.end(), order);
		for(int i=0;i<words.size();i++){
			cout<<words[i].w;
			if(i!=words.size()-1)cout<<" ";
		}
		cout<<"\n";
		words.clear();
	}

	return 0;
}