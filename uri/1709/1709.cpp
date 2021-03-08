#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c=0;cin>>n;
	vector<int> cards;
	for(int i=0;i<n;i++)cards.push_back(i);
	
	for(int i=0;i<n;i++)cout<<cards[i];
	cout<<endl;

	for(int i=0;i<n/2;i++){
		int front=cards.front();
		cards.pop();
		cards.push(front);
	}
/*
	while(cards[0]!=1){

	}*/

	return 0;
}