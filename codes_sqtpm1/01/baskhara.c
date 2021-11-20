// Guilherme Gabriel Ferreira Souza
// 11921ECP001

// Importação de biblioteca para entrada e saída
#include <stdio.h>

// Importação de biblioteca para operações matemáticas
#include <math.h>

int main(){
  // Criação de variáveis de ponto flutuante
  double a = 0, b = 0, c = 0, delta = 0 , x1 = 0, x2 = 0;

  // Leitura de input de a, b e c
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  // Atribuição da variável delta
  delta = (b*b) - (4 * a * c);

  // Verificação de se é possível calcular
  if (delta < 0 || a == 0) {
    printf("Impossivel calcular\n");
    return 0;
  }

  // Atribuição de raíz  
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  // Saída formatada das raízes caso sejam iguais ou diferentes
  if(x1 == x2){
    printf("R1 = %.5lf\n", x1);
  }else {
    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);
  }
  
  return 0;
}