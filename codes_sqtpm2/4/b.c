#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int jacont(char arm[1025][1025],char kmer[1025],int pos,int k){
    
    int t;
    for(int i=0;i<pos;i++){
        if(arm[i][0] == kmer[0]){
        
           for(int j=1;j<k;j++){
               if(arm[i][j]!=kmer[j])break;
               t=j;
           }
           
           if(t==k-1){
              return 1;
           } 
        
        }
    }
    


 return 0;
}



int main(){
    
    char c[1025],kmer[1025]={'\n'};
    int k,z,vet[1025]={0},pos=0;
    char arm[1025][1025];
    
    scanf("%s", c);
    scanf("%d", &k);
    
    int tam = strlen(c)-k;
    
    
    for(int i=0;i<=tam;i++){
        z=0;
        for(int j=i;j<i+k;j++){
            
            kmer[z]=c[j];
            z++;
        }
        
        if(jacont(arm,kmer,pos,k)){
           continue;
        }
        else{
        //printf("%s\n",kmer);

        
        //arm[pos] = kmer;
        strcpy(arm[pos],kmer);
        vet[pos]++;
        
        for(int q=0;q<=tam;q++){
              int count=0;
               for(int l=0;l<k;l++){
                   if(c[q+l]!=kmer[l])break;
                   count++;
               }
               
               if(count==k){
                  vet[pos]++;               
               }            
              
        }
         //printf("%s %d\n",kmer,vet[pos]);
        
         pos++;  
        }
           
    }
    
    
    int maior=0;
    for(int i=0;i<pos;i++){
        if(vet[i]>maior)maior=vet[i];
    }

    for(int i=0;i<pos;i++){
      if(vet[i]==maior)
        printf("%s ",arm[i]);
    }
    printf("\n");
    
    //printf("%s %s\n", &arm[0][0], &arm[3][0]);   



  return 0;
}       