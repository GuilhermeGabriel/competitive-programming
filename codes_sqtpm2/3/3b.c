#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int out(int qtd[],int e){
    int m=0;
    for(int i=0;i<e;i++){
        if(qtd[i]>m)m=qtd[i];
    }
    
    return m;     
}

int verifica(int n,char str[],char pc[],int k){
    
    for(int i=0;i<n-k;i++){
        
        if(str[i]==(pc[0]-32) || str[i]==pc[0]){
        
           for(int j=1;j<=k;j++){
               if(str[i+j]==pc[j] || str[i+j]==(pc[j]-32)){
                  continue;
               }
               else if((str[i+j]==' ' || str[i+j]=='\n' || str[i+j]=='.' || str[i+j]==',' || str[i+j]=='!' || str[i+j]=='?' || str[i+j]=='"') && j==k){
                  return 1;                   
               }
               else{
                  break;
               }
           }
                      
        }
            
    }
    
   return 0;
}

int main(){
    
    int k,e;
    char matriz[20][101];
    
    
    scanf("%d %d", &k,&e);
    
    for(int i=0;i<k;i++){
        scanf("%s", &matriz[i][0]);    
    }
    
    char desculpa[100][101];
    for(int i=0;i<=e;i++){
        fgets(&desculpa[i][0],100,stdin);
    }
        
    int qtd[101]={0};  
        
        char pc[101];
        char str[101];
       
        for(int i=0;i<k;i++){
            strcpy(pc,&matriz[i][0]);
            
            for(int j=1;j<=e;j++){
                strcpy(str,&desculpa[j][0]);
                if(verifica(strlen(str),str,pc,strlen(pc))){
                   qtd[j]++;
                }
            }    
        }
      
    int m = out(qtd,e);
        
        
        
    printf("Conjunto de desculpas:\n");
  
    
    
    for(int i=1;i<=e;i++){
        if(qtd[i] == m){
           printf("%s", &desculpa[i][0]);
        }
    }
    
    printf("\n");


    
  return 0;
}