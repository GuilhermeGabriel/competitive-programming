#include <iostream>

using namespace std;

int fat(int n) {
  if (n == 0) return 1;
  return n * fat(n - 1);
}

int main(void) {
  int n;
  cin >> n;

  int quant = 0;

  while (n != 0) {
    for (int i = 1; i <= 9; i++) {
      int result = fat(i);

      if (result > n) {
        n -= fat(i - 1);
        quant++;
        break;
      }
    }
  }

  cout << quant << endl;

  return 0;
}


