#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int v,f;
  struct no* prox;
} Lista;

void cria_lista(Lista** p);
void insere_final(Lista* p, int valor);
void insere_comeco(Lista* p, int valor);
void imprime_lista(Lista* p);
void libera_lista(Lista** p);

int Move_To_Front (Lista** p, int value);
int Transpose(Lista** p, int num);
int FreqC(Lista** p, int num);
void swap (Lista* a, Lista* b);

int main (){
    int N; scanf("%d",&N);

    char file_name[20];
    scanf("%s", file_name);

    FILE *input_file;
    input_file = fopen(file_name,"rb");
    if (input_file==NULL){
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fseek(input_file,0,SEEK_END);

    int qtd_req = ftell(input_file)/sizeof(int);

    rewind(input_file);

    int *vetor_req = (int*) malloc(qtd_req*sizeof(int));

    for(int i=0;i<qtd_req;i++){
      fread(&vetor_req[i], sizeof(int), 1, input_file);
    }

    fclose(input_file);

    Lista* Lista_MTF;
    Lista* Lista_TR;
    Lista* Lista_FC;
    cria_lista(&Lista_MTF);
    cria_lista(&Lista_TR);
    cria_lista(&Lista_FC);

    for(int i=1;i<=N;i++){
      insere_final(Lista_MTF,i);
      insere_final(Lista_TR,i);
      insere_final(Lista_FC,i);
    }

    int custo_MTF = 0;
    int custo_TR = 0;
    int custo_FC = 0;
    
    for(int d=0;d<qtd_req;d++){
      custo_MTF += Move_To_Front(&Lista_MTF,vetor_req[d]);
      custo_TR += Transpose(&Lista_TR,vetor_req[d]);
      custo_FC += FreqC(&Lista_FC,vetor_req[d]);
    }
    
    printf("%d %d %d\n",custo_MTF,custo_TR,custo_FC);

    libera_lista(&Lista_MTF);
    libera_lista(&Lista_TR);
    libera_lista(&Lista_FC);
    free(vetor_req);
return 0;
}

int Move_To_Front(Lista** p, int num){
    Lista *q=(*p)->prox;
    Lista* ant;
    int i = 0;
    
    if(q->v==num){
      i++;
    }else{
      while(q->v!=num && q->prox!=NULL){
        ant=q;
        q=q->prox;
        i++;
      }
      i++;

      if(q->v==num){
        ant->prox=q->prox;
        free(q);
        insere_comeco(*p, num);
      }
    }
return i;
}

int Transpose(Lista** p, int num){
  Lista *q=(*p)->prox;
  Lista *ant;
  int i=0;

  if(q->v==num){
    i++;
  }else{
    while(q->v!=num && q->prox!=NULL){
      ant=q;
      q = q->prox;
      i++;
    }
    i++;

    if(q->v==num){
      swap(ant,q);
      i++;
    }
  }
return i;
}

void swap (Lista* a, Lista* b){
  int temp;
  temp = b->v;
  b->v = a->v;
  a->v = temp;
}

int FreqC(Lista** p, int num){
  Lista *q=(*p)->prox;
  Lista *anta, *antq;
  int i=0;
  
  if(q->v==num){
    i++;
    q->f++;
  }else{
    while(q->v!=num && q->prox!=NULL){
      antq=q;
      q = q->prox;
      i++;
    }
    i++;

    if(q->v==num){
      q->f++;
     
      antq->prox=q->prox;

      Lista *noin=(Lista*)malloc(sizeof(Lista));
      noin->v = q->v;
      noin->f = q->f;
      noin->prox = NULL;

      Lista *aux=(*p)->prox;
      anta=*p; 
      if(aux->f!=0){
        while(aux->f > q->f){
          anta=aux;
          aux=aux->prox;
        }

        anta->prox=noin;
        noin->prox=aux;

      }else{      
        anta->prox=noin;
        noin->prox=aux;
      }

      free(q);
    }
  }
return i;
}

void cria_lista(Lista** p){
  Lista *q = (Lista*) malloc(sizeof(Lista));
  q->v = 0;
  q->f = 0;
  q->prox = NULL;
  *p = q;
}

void insere_final(Lista* p, int valor){
  Lista *q, *aux;
  q = (Lista*) malloc(sizeof(Lista));
  q->v = valor;
  q->f = 0;
  q->prox = NULL;    aux = p;
  while (aux->prox != NULL) aux = aux->prox;
  aux->prox = q;
}

void insere_comeco(Lista* p, int valor){
  Lista* q = (Lista*) malloc(sizeof(Lista));
  q->v = valor;
  q->prox = p->prox;
  p->prox = q;
}

void imprime_lista(Lista* p){
  Lista *q;
  for (q = p->prox; q != NULL; q = q->prox){
    printf ("%d(%d) ", q->v, q->f);
  }
  printf("\n");
}

void libera_lista(Lista** p){
  Lista* q;
  while (*p != NULL) {
    q = *p;
    *p = (*p)->prox;
    free(q);
  }
}
