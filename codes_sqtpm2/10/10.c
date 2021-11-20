#include<stdio.h>
#include<stdlib.h>

#define DEBUG 0

/* STRUCS, DEFINIÇÕES E CABEÇALHOS DAS SUAS FUNÇÕES DA TAD */ 
typedef struct no{
	int value;
	int freq;
	struct no *next;
} type_no;

type_no* create_no(int i);
int clean_list(type_no *p);
int print_list(type_no *p);
int solve_mtf(type_no **head, int *request, int r);
int solve_tf(type_no **head, int *request, int r);
int solve_fc(type_no **head, int *request, int r);


/* SEU PROGRAMA - MAIN */

int main(void){
  int n, r;
  type_no *head;
  
  int i;
  char input[100];
  
  scanf("%d", &n);
  scanf("%s", input);
  
  //system("ls *.bin");
  
  FILE *arq = fopen(input, "rb");
  if(arq==NULL){
    perror("fopen()");
    return 1;
  }
  
  fseek(arq, 0, SEEK_END);
  r = ftell(arq)/sizeof(int);
  rewind(arq);
  
  //printf("####\n");
  //printf("%d\n", r);
  
  //creating list
  head = create_no(1);
  type_no *p = head;
  
  for(i = 2; i <= n; i++){		
    p->next = create_no(i);
    p = p->next;		
  }
  
  //print_list(head);
  
  //reading requests
  int *request = (int*) malloc (sizeof(int)*r);
  for(i = 0; i < r; i++){
    //scanf("%d", &request[i]);
    fread(&request[i], sizeof(int), 1, arq);
    //printf("%d ", request[i]);
  }
  //printf("\n");
  fclose(arq);
  
  int mtf, tf, fc;
  mtf = tf = fc = 0;
  
  mtf = solve_mtf(&head, request, r);
  clean_list(head);
  
  tf = solve_tf(&head, request, r);
  clean_list(head);
  
  fc = solve_fc(&head, request, r);
  
  printf("%d %d %d\n", mtf, tf, fc);
	
//	print_list(head);
	
  free(request);

return 0;	
}

/* IMPLEMENTAÇÃO DAS FUNÇÕES DE SUA TAD */ 

type_no* create_no(int i){
	
  type_no *node = (type_no*) malloc (sizeof(type_no));
  
  node->value = i;
  node->freq = 0;			
  node->next = NULL;
	
return node;	
}

int clean_list(type_no *p){
  int i=1;
  
  while(p!=NULL){
    p->value = i++;
    p->freq = 0;	
    p = p->next;		
  }
	
return 0;
}

int print_list(type_no *p){
	
  printf("\n--> ");
  while(p!=NULL){
    printf("[%d, %d], ", p->value, p->freq);
    p = p->next;
  }
  printf("\n");

return 0;
}

/**********************************************************************/

int solve_mtf(type_no **head, int *request, int r){

  int i;
  int sum=0;
  type_no *p, *q; 

  for(i = 0; i < r; i++){
  
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
      		
        //printf("\t(%d)", q->value);
        
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

/**********************************************************************/

int solve_tf(type_no **head, int *request, int r){

  int i;
  int sum=0;
  type_no *p, *q1, *q2;

  for(i = 0; i < r; i++){
  				
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
      				
        //printf("\t(%d)\t(%d)", q1->value, q2->value);
        
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

/**********************************************************************/

int solve_fc(type_no **head, int *request, int r){

  int i;
  int sum=0;
  type_no *p, *q, *q1, *q2;
  
  for(i = 0; i < r; i++){
    int cost = 0
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


/**********************************************************************/
