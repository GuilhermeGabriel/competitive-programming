#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; queue<int> cards;

	while(cin>>n&&n){
		for(int i=1;i<=n;i++)cards.push(i);

		cout<<"Discarded cards:";
		while(cards.size()>1){
			int discarted=cards.front();
			cards.pop();
			int to_end=cards.front();
			cards.pop();
			cards.push(to_end);

			cout<<" "<<discarted;
			if(cards.size()!=1)cout<<",";
		}
		cout<<"\n";
		int top=cards.front();
		cards.pop();
		cout<<"Remaining card: "<<top<<"\n";
	}

	return 0;
}