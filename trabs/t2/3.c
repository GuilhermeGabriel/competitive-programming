#include <stdio.h>

float calcula_e_retorna_media(float n1, float n2, float n3,char tipo){
  if(tipo=='A'){
    return (n1+n2+n3)/3.0;
  }else if(tipo=='P'){
    return (n1*5+n2*3+n3*2)/10.0;
  }else if(tipo=='H'){
    return 3.0/((1.0/n1)+(1.0/n2)+(1.0/n3));
  }
  return -1;
}

int main(){
  int opcao=1;
  float n1,n2,n3,media;
  char tipo_de_media;

  while(opcao){
    printf("Digite a nota 1 do aluno: ");
    scanf("%f",&n1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f",&n2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f",&n3);

    printf("Tipo de media: ");
    scanf(" %c",&tipo_de_media);

    media = calcula_e_retorna_media(n1,n2,n3,tipo_de_media);
    
    if(tipo_de_media=='A'){
      printf("A media aritimetica eh: %.2f\n", media);
    }else if(tipo_de_media=='P'){
      printf("A media ponderada eh: %.2f\n", media);
    }else if(tipo_de_media=='H'){
      printf("A media harmonica eh: %.4f\n", media);
    }

    printf("Deseja calcular uma nova media?[1:sim/0:nao]\n");
    scanf("%d",&opcao);
  }

  return 0;
}