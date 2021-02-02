#include <bits/stdc++.h>

using namespace std;

void modifys(string a) {
    a[2] = 'b';
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    string ss = "abc";

    modifys(ss);

    for (int i = 0; i < ss.size(); i++)
        cout << ss[i] << " ";
    cout << endl;

    return 0;
}
