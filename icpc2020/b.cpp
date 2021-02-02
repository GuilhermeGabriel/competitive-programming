#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, d, l, r, c;
  cin >> n;

  int mat[10][10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      mat[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    cin >> d >> l >> r >> c;

    int col = c - 1;
    int lin = r - 1;

    if (d == 0) {

      if (l + col > 10) {
        cout << "N" << endl;
        return 0;
      }

      for (int k = col; k <= col + (l - 1); k++) {
        if (mat[lin][k] == 0) {
          mat[lin][k] = 1;
        }
        else {
          cout << "N" << endl;
          return 0;
        }
      }
    }
    else if (d == 1) {

      if (l + lin > 10) {
        cout << "N" << endl;
        return 0;
      }

      for (int k = lin; k <= lin + (l - 1); k++) {
        if (mat[k][col] == 0) {
          mat[k][col] = 1;
        }
        else {
          cout << "N" << endl;
          return 0;
        }
      }
    }

  }



  cout << "Y" << endl;
  return 0;
}

