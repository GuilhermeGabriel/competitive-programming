#include <stdio.h>

float imc(float peso, float altura){
  return peso/(altura*altura);
}

void mostra_mensagem_sobre_imc(float imc){
  if(imc<18.5){
    printf("De acordo o imc o peso eh: ABAIXO DO PESO\n");
  }else if(18.5<=imc&&imc<=25){
    printf("De acordo o imc o peso eh: PESO NORMAL\n");
  }else if(25<imc&&imc<=30){
    printf("De acordo o imc o peso eh: ACIMA DO PESO\n");
  }else if(imc>30){
    printf("De acordo o imc o peso eh: OBESO\n");
  }
}

int main(){
  int opcao=1;
  float peso, altura, imc_calculado;

  while(opcao){
    printf("Digite o peso em kilograma: ");
    scanf("%f",&peso);
    printf("Digite o altura em metros: ");
    scanf("%f",&altura);

    imc_calculado=imc(peso,altura);
    printf("O imc calculado e: %.2f\n", imc_calculado);
    mostra_mensagem_sobre_imc(imc_calculado);

    printf("Deseja calcular um novo imc?[1:sim/0:nao]\n");
    scanf("%d",&opcao);
  }

  return 0;
}