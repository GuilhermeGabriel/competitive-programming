#include <stdio.h>
#include <stdlib.h>

struct no{
  int funcionario;
  struct no *prox;
  struct no *ant;
};
typedef struct no No;

void inicializa(No **p, int v){
  No *q;
  //No *antQ;
  //No *ini;

  for(int i=v; i>= 1; i--){
      q = (No*) malloc(sizeof(No));
      q->funcionario = i;
    if(*p == NULL){
        *p =q;
        q->prox = q;
        q->ant = q;
        //ini = q;

    }else{
        q->prox = (*p)->prox;
        (*p)->prox = q;
        q->ant = *p;
        q->prox->ant=q;

        //antQ = q;
    }

  }
  //ini->ant = q;

}

int imprime_lista_h(No *q){
  if(q == NULL) return -1;
  No *aux = q->prox;
  while(aux != q){
    printf("%d\n", aux->funcionario);
    aux = aux->prox;
  }
  printf("%d\n", aux->funcionario);
  return 0;
}

int imprime_lista_a(No *q){
  if(q == NULL) return -1;
  No *aux = q;
  while(aux != q->prox){
    printf("%d\n", aux->funcionario);
    aux = aux->ant;
  }
  printf("%d\n", aux->funcionario);
  return 0;
}

/*No* conta_lista_antihorario(No **p, int x,int atual){//Busca no sentido anti-horário
  No *q = *p;//q aponta para a primeira posição
  No *aux=q->ant;//aux recebe q->ant que seria  a última posição
  if(q->funcionario == atual){//Se encontrou o atual na primeira posição
    aux= q;//aux recebe q
  }
  else{//senão
    while(aux != q){//Laço que analisa toda a lista
      if(aux->funcionario == atual) break;//se encontrar o valor, sai do laço
      aux = aux->ant;//se ainda não encontrou, analisa o anterior
    }
  }
  for (int i=0;i<x-1;i++){//Laço para andar M posições no sentido anti-horário
    aux=aux->ant;
  }
  return aux;//Retorna o número do funcionário
}*/

/*No* conta_lista_horario(No **p, int x,int atual){//Busca no sentido horário
  No *q = *p;//q aponta para a primeira posição
  No *aux=q->prox;//aux recebe q->prox que seria a próxima posição
  if(q->funcionario == atual){//Se encontrou na primeira posição
    aux= q;
  }
  else{//senão
    while(aux != q){//Laço que analisa toda a lista
      if(aux->funcionario == atual) break;//se encontar o valor, sai do laço
      aux = aux->prox;//se ainda não encontrou, analisa o próximo
    }
  }
  for (int i=0;i<x-1;i++){//Laço para andar K posições no sentido horário
    aux=aux->prox;
  }
  return aux;//Retorna o número do funcionário
}*/
No* conta_Horario(No *q, int k){
    No *aux = q->prox;
    while(k > 0){
        k--;
        aux= aux->prox;
    }
    return aux->ant;
}

No* conta_Anti(No *q, int m){
    No *aux = q;
    while(m > 0){
        m--;
        aux = aux->ant;
    }
    return aux->prox;
}

void remover(No **p){
    No *q = *p;
    No *noAnt = q->ant, *noProx = q->prox;

    

    //if(q->funcionario==v){
        //*p = q->prox;
        noAnt->prox = q->prox;
        noProx->ant = q->ant;
        free(q);
        //return;
   // }
    /*while(q->prox!=NULL){
        if(q->prox->funcionario==v) break;
        q = q->prox;
    }
    if(q->prox==NULL) return;
    No *aux = q->prox;
    noAnt->prox = q->prox;
    noProx->ant = q->ant;
    free(aux);*/
}

int main() {

  int N, K, M;
  No *L = NULL;
  scanf("%d %d %d", &N, &K, &M);
  inicializa(&L, N);//insere números de 1 a N na lista
  //imprime_lista_h(L);
  //imprime_lista_a(L);

  int tam_lista=N;
  No *atual_k=(No*) malloc(sizeof(No));
  No *atual_m=(No*) malloc(sizeof(No));
  //atual_k->funcionario=1;
  //atual_m->funcionario=N;

  while(tam_lista > 0){
    atual_k = conta_Horario(L,K);
    atual_m = conta_Anti(L,M);

    No *q1=atual_k, *q2=atual_m;
    atual_k=atual_k->prox;
    atual_m=atual_m->ant;

    //Remover o(s) valore(s)
    if(q1->funcionario==q2->funcionario){
        printf("%d\n", q1->funcionario);
        remover(&q1);
        tam_lista--;
    }
    if(q1->funcionario!=q2->funcionario){
        printf("%d %d\n", q1->funcionario, q2->funcionario);
        remover(&q1);
        remover(&q2);

        tam_lista= tam_lista - 2;
    }
  }

  return 0;
}
