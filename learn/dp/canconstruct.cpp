#include "bits/stdc++.h"

using namespace std;

unordered_map<string,bool> memo;

bool canconstruct(string target, vector<string> word_bank){
	if(target.empty())return true;
	if(memo[target])return memo[target];

	for(auto w:word_bank){
		if(target.find(w)==0){
			string suffix=target.substr(w.size(),target.size());
			if(canconstruct(suffix,word_bank)){
				memo[target]=true;
				return true;
			}
		}
	}

	memo[target]=false;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cout<<canconstruct("abcdef",{"ab","abc","cd","def","abcd"})<<'\n';//true
	cout<<canconstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeef",
	{
		"e",
		"ee",
		"eee",
		"eeee",
		"eeeee",
		"eeeee"
	})<<'\n'; //false
	
	return 0;
}