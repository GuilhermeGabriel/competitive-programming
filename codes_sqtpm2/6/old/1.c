#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int id,v;
	struct no *prev,*prox;
} Desemp;

void insert(Desemp **p,int id) {
  Desemp *q=(Desemp*)malloc(sizeof(Desemp));
  q->id=id;
  q->v=1;
  if(*p==NULL){
    *p=q;
    q->prox=q;
    q->prev=q;
  }else{
    q->prox=(*p)->prox;
    (*p)->prox=q;
		q->prev=*p;
		q->prox->prev=q;
  }
}

void run(Desemp **p,int tam,int k,int m){
	int kaux=k, maux=m;
	Desemp *ek,*em;
	Desemp *kp=*p;
	Desemp *mp=(*p)->prox;

	while(tam>0){
	kaux=k; maux=m;

	//Rodar horario
	//Desemp *kp=*p;
  while (kaux) {
    if(kp->v)kaux--;
    if(kaux==0)ek=kp;
    kp=kp->prev;
	}
	//printf("%d %d\n",kp->id,kp->v);

	/*	
	Desemp *kpt=*p;
  while (kpt->prev!=*p) {
		printf("%d %d\n",kpt->id,kpt->v);
		if(kpt->v)kaux--;
    kpt=kpt->prev;
	}
	printf("%d %d\n",kpt->id,kpt->v);*/

	//Rodar antihorario
	//Desemp *mp=(*p)->prox;
  while(maux) {
		if(mp->v)maux--;
		if(maux==0)em=mp;
    mp=mp->prox;
	}
	//printf("%d %d\n",mp->id,mp->v);

	ek->v=0;
	em->v=0;

	/*
	Desemp *kmp=(*p)->prox;
  while (kmp!=*p) {
		printf("%d %d\n",kmp->id,kmp->v);
    if(kmp->v)maux--;
    kmp=kmp->prox;
	}printf("%d %d\n",kmp->id,kmp->v);*/

	if(em->id!=ek->id){
		printf("%d %d\n",ek->id,em->id);
		tam-=2;
	}else{
		printf("%d\n",ek->id);
		tam--;
	}

	}
}

int tamLista(Desemp *p) {
    if (p == NULL) return 0;
    int tam = 0;
  	Desemp *aux = p->prox;
    while (aux != p) {
      aux = aux->prox;
      tam++;
    }
    tam++;
    return tam;
}

int main(){
	int n,k,m;scanf("%d%d%d",&n,&k,&m);

	Desemp *LCirc=NULL;
	for(int i=1;i<=n;i++){
		insert(&LCirc,i);
	}

	run(&LCirc,n,k,m);

	//printf("%d\n",tamLista(LCirc));

	return 0;
}