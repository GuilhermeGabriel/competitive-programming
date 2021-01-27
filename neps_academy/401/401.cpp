#include <iostream>

using namespace std;

int main(){
	int menor, in[10];

	for(int i=0;i<10;i++){
		cin >> in[i];
	}

	menor = in[0];

	for(int i=0;i<10;i++){
		if(in[i]<menor)menor=in[i];
	}

	cout << "Menor: " << menor << endl;
	cout << "Ocorrencias: ";
	for(int i=0;i<10;i++) {
		if(in[i]==menor) cout << i;
		if(i!=9) cout << " ";
		else cout << endl;
	}

	for(int i=0;i<10;i++) {
		if(in[i]==menor) cout << -1;
		else cout << in[i];
		if(i!=9) cout << " ";
		else cout << endl;
	}

	return 0;
}