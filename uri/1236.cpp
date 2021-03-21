#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int quant = 0;
	char letrabef, letrabt;

	while (getline(cin, s)) {
		transform(s.begin(), s.end(), s.begin(),
		[](unsigned char c) { return std::tolower(c); });

		letrabef = s[0];
		bool counted = false;

		for (int i = 0; i < s.length(); i++) {
			if (s[i - 1] == ' ') {

				if (s[i] == letrabef && !counted) {
					quant++;
					counted = true;
				}

				if (s[i] != letrabef) {
					letrabef = s[i];
					counted = false;
				}
			}
		}

		cout << quant << endl;
		quant = 0;
	}

	return 0;
}