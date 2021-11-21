#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct info{
  char nome[51];
  char endereco[101];
  char numero[13];
  char data[9];
} Info;

void mostrarElemento(Info elemento, int idx){
  printf("%d- %s\n",idx,elemento.nome);
  printf("%s\n",elemento.endereco);
  printf("%s\n",elemento.numero);
  printf("%s\n\n",elemento.data);
}

void inserir_registros(Info atual[], Info el, int idxfim){
  atual[idxfim]=el;
}

int remover_registros(Info atual[], char nome[]){
  int quant_removidos=0, cont=0;
  Info aux[1000];

  for(int i=0;i<1000;i++){
    if(strcmp(atual[i].nome,nome)==0){
      quant_removidos++;
    }else{
      aux[cont]=atual[i];
      cont++;
    }
  }

  for(int i=0;i<cont;i++){
    atual[i]=aux[i];
    //mostrarElemento(aux[i],);
  }

  return quant_removidos;
}

int realizar_buscas(Info atual[], char nome[]){
  int quantos_encontrados=0;
  int tamP=strlen(nome)-1;

  for(int e=0;e<1000;e++){
    int tamT=strlen(atual[e].nome)-1;

    int encontrou=0,j;

    for(int i=0;i<=tamT-tamP;i++){
      j=0;
      while(j<tamP){
        if(nome[j]!=atual[e].nome[i+j])break;
        j++;
      }

      if(j==tamP){
        encontrou=1;
      }
    }

    if(encontrou==1){
      quantos_encontrados++;
      mostrarElemento(atual[e],e+1);
    }
  }
  
  return quantos_encontrados;
}

void imprimir_todos_registros(Info atual[1000]){
  for(int i=0;i<1000;i++){
    if(strlen(atual[i].nome)==0)break;
    mostrarElemento(atual[i],i+1);
  }
}

int main(){
  char comando;
  int idxfim = 0;
  int flag = 1;

  Info atual[1000];

  while(flag==1){
    scanf("%c", &comando);

    if(comando == 'i'){
      //adicionar

      Info elemento;
      scanf(" %[^\n]",elemento.nome);
      scanf(" %[^\n]",elemento.endereco);
      scanf(" %[^\n]",elemento.numero);
      scanf(" %[^\n]",elemento.data);

      inserir_registros(atual, elemento, idxfim++);

      printf("Registro inserido.\n\n");
    }
    
    if(comando == 'r'){
      //remove
      char nome[51];
      scanf(" %[^\n]",nome);

      int quant_rem = remover_registros(atual, nome);
      idxfim-=quant_rem;

      printf("%d registros removidos.\n\n", quant_rem);
    }
    
    if(comando == 'b'){
      //busca
      

      if(idxfim > 0){
        char nome[51];
        scanf(" %[^\n]",nome);

        printf("Resultado da busca:\n");
        int quant_enc=realizar_buscas(atual, nome);
        if(quant_enc == 0){
          printf("Nenhum registro.\n\n");
        }
      }else{
        printf("Nenhum registro.\n\n");
      }
    }
    
    if(comando == 'p'){
      //impressao
      printf("Listagem:\n");

      if(idxfim > 0){
        imprimir_todos_registros(atual);
      }
      else{
        printf("Nenhum registro.\n\n");
      }
    }
    
    if(comando == 'f'){
      flag = 0;
    }
  }
  
  
  return 0;
}