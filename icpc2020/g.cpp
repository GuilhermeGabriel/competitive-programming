#include <bits/stdc++.h>

using namespace std;

int soma(int *v, int i, int f) {
  int soma = 0;

  for (int k = i; k <= f; k++) {
    soma += v[k];
  }

  return soma;
}

int main() {

  int n;
  cin >> n;
  int vetor[n];

  int f = n - 1;

  for (int i = 0; i < n; i++) {
    cin >> vetor[i];

  }

  int melhorResult = 0;
  int melhorF = -1;

  for (int m = f; m >= 0; m--) {
    int resultAtual = soma(vetor, 0, m);

    if (resultAtual > melhorResult) {
      melhorResult = resultAtual;
      melhorF = m;
    }
  }

  if (melhorF >= 0) {
    int somaR = soma(vetor, 0, melhorF);
    cout << somaR + 100 << endl;
  } else {
    cout << 100 << endl;
  }

  return 0;
}
