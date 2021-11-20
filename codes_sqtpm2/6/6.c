#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int id,v;
  struct no *prev,*prox;
} Desemp;

void insert(Desemp **p,int id) {
  Desemp *q=(Desemp*)malloc(sizeof(Desemp));
  q->id=id;q->v=1;
  if(*p==NULL){
    *p=q;q->prox=q;q->prev=q;
  }else{
    q->prox=(*p)->prox;
    (*p)->prox=q;
    q->prev=*p;
    q->prox->prev=q;
  }
}

void run(Desemp **p,int tam,int k,int m){
  int kaux,maux;
  Desemp *ek,*em,*kp=*p,*mp=(*p)->prox;

  while(tam>0){
   kaux=k;maux=m;

   while(kaux){
     if(kp->v)kaux--;
     if(kaux==0)ek=kp;
     kp=kp->prev;
   }

   while(maux){
     if(mp->v)maux--;
     if(maux==0)em=mp;
     mp=mp->prox;
   }

   ek->v=0;em->v=0;
   if(em!=ek){printf("%d %d\n",ek->id,em->id);tam-=2;}
   else{printf("%d\n",ek->id);tam--;}
  }
}

void libera(Desemp **p){
  Desemp *q;(*p)->prev->prox=NULL;
  while((*p)->prox!=NULL){
  q=*p;*p=(*p)->prox;free(q);
  }free(*p);
}

int main(){
  int n,k,m;scanf("%d%d%d",&n,&k,&m);
 
  Desemp *LCirc=NULL;
  for(int i=1;i<=n;i++){
    insert(&LCirc,i);
  }

  run(&LCirc,n,k,m);
  libera(&LCirc);

  return 0;
}
