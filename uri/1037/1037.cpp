#include <bits/stdc++.h>

using namespace std;

int main(){
	double n; cin>>n;	

	if(n<0||n>100){
		cout << "Fora de intervalo\n";
	 	return 0;
	}

	cout << "Intervalo ";
	if(n>=0&&n<=25){ 
		cout<<"[0,25]";
	}else if(n>25&&n<=50){
		cout<<"(25,50]";
	}else if(n>50&&n<=75){
		cout<<"(50,75]";
	}else if(n>75&&n<=100){
		cout<<"(75,100]";
	}
	cout << endl;

	return 0;
}