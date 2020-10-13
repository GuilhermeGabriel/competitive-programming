#include <iostream>
#include <ios> //used to get stream size
#include <limits> //used to get numeric limits
using namespace std;

int main() {
	int x;
	char str[80];
	cout << "Enter a number and a string:\n";
	cin >> x;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.getline(str, 80); //take a string
	cout << "You have entered:\n";
	cout << x << endl;
	cout << str << endl;
}
