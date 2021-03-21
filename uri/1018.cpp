#include <bits/stdc++.h>

using namespace std;

int main(){
	int q100 = 0, q50 = 0, q20 = 0, q10 = 0, q5 = 0, q2 = 0, q1 = 0;
	int n;

	cin >> n;

	cout << n << endl;

	q100 = n / 100;
	n %= 100;

	q50 = n / 50;
	n %= 50;

	q20 = n / 20;
	n %= 20;

	q10 = n / 10;
	n %= 10;

	q5 = n / 5;
	n %= 5;

	q2 = n / 2;
	n %= 2;

	q1 = n / 1;
	n %= 1;


	cout << q100 << " nota(s) de R$ 100,00" << endl;
	cout << q50 << " nota(s) de R$ 50,00" << endl;
	cout << q20 << " nota(s) de R$ 20,00" << endl;
	cout << q10 << " nota(s) de R$ 10,00" << endl;
	cout << q5 << " nota(s) de R$ 5,00" << endl;
	cout << q2 << " nota(s) de R$ 2,00" << endl;
	cout << q1 << " nota(s) de R$ 1,00" << endl;

	return 0;
}