#include <stdio.h>

float imc(float peso, float altura){
  return peso/(altura*altura);
}

int main(){
  int opcao=1;
  float peso, altura;

  while(opcao){
    printf("Digite o peso em kilograma: ");
    scanf("%f",&peso);
    printf("Digite o altura em metros: ");
    scanf("%f",&altura);
    printf("O imc calculado e: %.2f\n", imc(peso,altura));
    printf("Deseja calcular um novo imc?[1:sim/0:nao]\n");
    scanf("%d",&opcao);
  }

  return 0;
}