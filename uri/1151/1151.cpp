#include <bits/stdc++.h>

using namespace std;

int main(){
	int N; cin >> N; N-=2;
	
	int antecessor = 0, anterior = 1, atual = 0; 
	cout << antecessor << " " << anterior << " ";

	while(N--){
		atual = antecessor + anterior;
		cout << atual;
		if(N>0) cout << " ";
		antecessor = anterior;
		anterior = atual;
	}
	cout << endl;

	return 0;
}