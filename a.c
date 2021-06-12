#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    int freq;
    struct no* prox;
    struct no* ant;
}No;

void insere_comeco(No** p, int valor) {// p recebe &L
    No* q;
    q = (No*) malloc(sizeof(No));
    q->valor = valor;
    q->ant = NULL;
    q->prox = *p;
    (*p)->ant=q;

    //*p = q;
    
    //[] []
}

void remove_valor(No** p, int v) {// p recebe &L
    No* q = *p;
    if(q==NULL) return; //lista vazia
    if(q->valor==v){ //encontrou no 1o elemento
        q->ant->prox = q->prox;
        q->prox->ant = q->ant;
        free(q);
    }
}

void insere_final(No** p, int v){
    No *aux, *q;
    q = (No*) malloc(sizeof(No));
    q->valor = v;
    q->freq = 0;
    q->prox = NULL;
    if (*p == NULL){
        q->ant = NULL;
        *p = q;
    }
    else if((*p)->prox == NULL){
        (*p)->prox = q;
        q->ant = *p;
    }
    else{
        aux = *p;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = q;
        q->ant = aux;
    }

}

int limpa(No *p){
    int i=1;
    while(p!=NULL){
      p->valor=i;
      i++;
      p->freq =0;
      p=p->prox;
    }
    return 0;
}

int main(){
    int n, mtf=0, tr=0, fc=0;
    int *requisicoes;
    No *lista1 = NULL;
    scanf("%d", &n);
    fflush(stdin);
    char nome[50];
    scanf("%s", nome);

    FILE *arq;
    arq = fopen(nome, "rb");
    if(arq==NULL){
      perror("Erro ao abrir o arquivo");
      return 1;
    }

    fseek(arq, 0, SEEK_END);
    int num_requi = ftell(arq)/sizeof(int);
    rewind(arq);

    requisicoes = (int*)malloc(num_requi*sizeof(int));
    for(int i=0; i<num_requi;i++){
       fread(&requisicoes[i],sizeof(int),1,arq);
    }
    fclose(arq);

    /*
    for(int i=0;i<num_requi;i++){
      printf("%d",requisicoes[i]);
    }*/

    for(int i=1; i<=n; i++){
      insere_final(&lista1, i);
    }

    /*
    No *aa=lista1;
    while(aa->prox!=NULL){
      printf("%d", aa->valor);
      aa=aa->prox;
    }
    printf("%d", aa->valor);
    */


    for(int i=0; i<num_requi; i++){
        int buscar = requisicoes[i];
        //mtf++;
        No *aux = lista1;
        if(aux->valor==buscar){
          mtf++;
        }
        else{
          mtf++;
          while(aux->valor != buscar && aux->prox!=NULL){
              aux = aux->prox;
              mtf++;
          }
          if(aux->valor == buscar){
            remove_valor(&aux, buscar);
            
            No* q;
            q = (No*) malloc(sizeof(No));
            q->valor = buscar;
            q->ant = NULL;
            q->prox = lista1;
            lista1->ant=q;
            lista1=q;

            //insere_comeco(&lista1, buscar);
            
            //lista1=aux;
          }

          /*if(lista1->valor != buscar){
            remove_valor(&aux, buscar);
            insere_comeco(&lista1, buscar);
            //Move aux para primeira posicao. Remover o valor   que esta em aux e adicionar buscar no começo da lista.
          }*/
        }
    }

    limpa(lista1);

    //printf("%d",mtf);
  
    
    for(int i=0; i<num_requi; i++){
        int buscar = requisicoes[i];
        No *aux2 = lista1;
        if(aux2->valor==buscar){
          tr++;
        }else{
          while(aux2->valor != buscar && aux2->prox!=NULL){
              aux2 = aux2->prox;
              tr++;
          }
          if(aux2->valor != buscar){
              //muda com o anterior
              //
              aux2->valor=aux2->ant->valor;
              aux2->ant->valor=buscar;
              /*
              No *var = aux2->ant;
              aux2->ant = var->ant;
              var->prox = aux2->prox;
              aux2->prox = var;
              var->ant = aux2;*/
              tr++;
          }
      }
    }
    printf("%d",tr);

    limpa(lista1);

    /*
    for(int i=0; i<num_requi; i++){
        int buscar = requisicoes[i];
        No *aux3 = lista1;
        //No *auxcont = contador;

        if(aux3->valor==buscar){
           fc++;
           aux3->freq++;
        }
        else{

           while(aux3->valor != buscar && aux3->prox!=NULL){
            aux3 = aux3->prox;
            fc++;
          }
          fc++;

          No *var2 = lista1;
          No *auxi;
          int a=0;
          if(aux3->valor == buscar){
             aux3->freq++;

             while(var2->freq > aux3->freq && var2->prox!=NULL){
                var2 = var2->prox;
                a++;
             }
             if(a==0){
               (aux3->ant)->prox=NULL;
               aux3->prox = var2;
               aux3->ant=NULL;
             }
             else{
              auxi= var2->ant;
              var2->ant = aux3;
              (aux3->ant)->prox = NULL;
              aux3->prox = var2;
              auxi->prox=aux3;
             }
          }


        }

        //coloca no começo de acordo com o contador
        //contador do valor buscado aumenta
    }

    free(lista1);
    free(requisicoes);
    printf("%d %d %d\n", mtf, tr, fc);*/
return 0;
}