#include <bits/stdc++.h>

using namespace std;

int main(){
	double n; cin >> n;
	int nf=floor(n);
	int cents=(n-nf)*100;
	int ni = n;

	int q100 = 0, q50 = 0, q20 = 0, q10 = 0, q5 = 0, q2 = 0;

	q100 = ni / 100;
	ni %= 100;

	q50 = ni / 50;
	ni %= 50;

	q20 = ni / 20;
	ni %= 20;

	q10 = ni / 10;
	ni %= 10;

	q5 = ni / 5;
	ni %= 5;

	q2 = ni / 2;
	ni %= 2;

	cout << "NOTAS:" << endl;
	cout << q100 << " nota(s) de R$ 100.00" << endl;
	cout << q50 << " nota(s) de R$ 50.00" << endl;
	cout << q20 << " nota(s) de R$ 20.00" << endl;
	cout << q10 << " nota(s) de R$ 10.00" << endl;
	cout << q5 << " nota(s) de R$ 5.00" << endl;
	cout << q2 << " nota(s) de R$ 2.00" << endl;

	double m1 = 0, m50 = 0, m25 = 0, m10 = 0, m05 = 0, m01 = 0;

	m1 = ni / 1;
	ni %= 1;

	m50 = cents / 50;
	cents %= 50;

	m25 = cents / 25;
	cents %= 25;

	m10 = cents / 10;
	cents %= 10;

	m05 = cents / 5;
	cents %= 5;

	m01 = cents / 1;
	cents %= 1;

	cout << "MOEDAS:" << endl;
	cout << m1 << " moeda(s) de R$ 1.00" << endl;
	cout << m50 << " moeda(s) de R$ 0.50" << endl;
	cout << m25 << " moeda(s) de R$ 0.25" << endl;
	cout << m10 << " moeda(s) de R$ 0.10" << endl;
	cout << m05 << " moeda(s) de R$ 0.05" << endl;
	cout << m01 << " moeda(s) de R$ 0.01" << endl;

	return 0;
}