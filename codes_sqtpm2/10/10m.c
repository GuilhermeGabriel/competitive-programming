#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int value;
	int freq;
	struct no *next;
} NO;

NO* create_no(int i);
int solve_mtf(NO **head, int *request, int qe);
int solve_tf(NO **head, int *request, int qe);
int solve_fc(NO **head, int *request, int qe);
int clean_list(NO *p);

int main(){
	int n,qe;
  char input[100];
  
  scanf("%d", &n);
  scanf("%s", input);
  
  FILE *arq = fopen(input, "rb");
  if(arq==NULL){
    perror("fopen()");
    return 1;
  }
  
  fseek(arq, 0, SEEK_END);
  qe = ftell(arq)/sizeof(int);
  rewind(arq);

  NO *head = create_no(1);
  NO *p = head;
  
  for(int i = 2; i <= n; i++){		
    p->next = create_no(i);
    p = p->next;		
  }

  int *request = (int*) malloc (sizeof(int)*qe);
  for(int i = 0; i < qe; i++){
    fread(&request[i], sizeof(int), 1, arq);
  }
  fclose(arq);

  int mtf, tf, fc;
  mtf = tf = fc = 0;

  mtf = solve_mtf(&head, request, qe);
  
  clean_list(head);

	tf = solve_tf(&head, request, qe);

	clean_list(head);

	fc = solve_fc(&head, request, qe);

  printf("%d %d %d\n", mtf, tf, fc);
  
	return 0;
}

NO* create_no(int i){
  NO *node = (NO*) malloc (sizeof(NO));
  
  node->value = i;
  node->freq = 0;			
  node->next = NULL;
return node;	
}

int clean_list(NO *p){
  int i=1;
  
  while(p!=NULL){
    p->value = i++;
    p->freq = 0;	
    p = p->next;		
  }
return 0;
}

int solve_mtf(NO **head, int *request, int qe){
  int i;
  int sum=0;
  NO *p, *q;

  for(i = 0; i < qe; i++){
  
    int cost = 0;
    p = *head;
    
    if(p->value == request[i]){
      cost++;
    }
    else{
      while(p->value != request[i] && p->next!=NULL){
        //printf("%d, ", p->value);
        q = p;
        p = p->next;
        cost++;	
      }	
      cost++;
      			
      if(p->value == request[i]){
        q->next = p->next;
        p->next = *head;
        *head = p;
      }
    }
    
    //printf("\n%d\n", cost);
    sum+=cost;			
  }	
return sum;
}

int solve_tf(NO **head, int *request, int qe){
  int sum=0;
  NO *p, *q1, *q2;

  for(int i = 0; i < qe; i++){
  				
    int cost = 0;
    q1 = q2 = p = *head;
    			
    if(p->value == request[i]){
      cost++;
    }
    else{
    
      while(p->value != request[i] && p->next!=NULL){
        q1 = q2;
        q2 = p;
        p = p->next;
        cost++;	
      }	
      cost++;
      					
      if(p->value == request[i]){
        if(q1!=q2){
          q1->next = q2->next;
          q2->next = p->next;
          p->next = q2;
        }
        else{
          q1->next = p->next;
          p->next = *head;
          *head = p;
        }
        cost++;
      }
    }
    //printf("\n%d\n", cost);
    sum+=cost;
  }	
return sum;
}


int solve_fc(NO **head, int *request, int qe){
  int sum=0;
  NO *p, *q, *q1, *q2;
  
  for(int i = 0; i < qe; i++){
    int cost = 0;
    p = *head; 
    		
    if(p->value == request[i]){
      cost++;
      p->freq++;
    }
    else{
    			
      while(p->value != request[i] && p->next!=NULL){
        q = p;
        p = p->next;
        cost++;	
      }
      cost++;
      			
      if(p->value == request[i]){
      				
        p->freq++;
        				
        q1 = q2 = *head;
        while(q2->freq > p->freq && q2->next!=NULL){
          q1 = q2;
          q2 = q2->next;
        }
        				
        if(q1!=q2){
        					
          q->next = p->next;
          q1->next = p;
        
          if(p!=q2) p->next = q2;					
        }
        else{
        					
          q2 = q1->next;
          					
          //printf("[%d, %d, %d]\n", q1->value, q2->value, p->value);
          *head = p;					
          q->next = p->next;				
          p->next = q1;
        					
        }
      }
    }
    //printf("\n%d\n", cost);
    sum+=cost;			
  }	
return sum;
}