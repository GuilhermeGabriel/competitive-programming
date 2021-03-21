#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;

	cin >> s;
	transform(s.begin(), s.end(), s.begin(),
	[](unsigned char c) { return std::tolower(c); });

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'z' && s[i + 1] == 'e' && s[i + 2] == 'l' && s[i + 3] == 'd' && s[i + 4] == 'a') {
			cout << "Link Bolado" << endl;
			return 0;
		}
	}

	cout << "Link Tranquilo" << endl;

	return 0;
}