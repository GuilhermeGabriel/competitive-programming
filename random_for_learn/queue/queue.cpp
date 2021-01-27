#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<int> f;

	f.push(3);
	f.push(2);
	f.push(1);	

	//int tmp = f.front();
	int tmp = f.back();
	cout << tmp << endl;

	return 0;
}