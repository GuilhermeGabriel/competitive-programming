#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int a,l,x,y,r=0;
    
    scanf("%d %d", &a,&l);
    char tab[a][l];
    
    for(int i=0;i<a;i++){
        for(int j=0;j<l;j++){
            scanf(" %c", &tab[i][j]);   
        }
    }
    
    scanf("%d %d", &x,&y);
    char pec[x][y];
    
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf(" %c", &pec[i][j]); 
        }
    }
    
     for(int i=0;i<a-x&&!r;i++){ 
         for(int j=0;j<l-y&&!r;j++){
         
             r=1;
             for(int k=0;k<x;k++){
                 for(int q=0;q<y;q++){
                     
                     if(pec[k][q] == '#' && tab[k+i][q+j]!='.'){
                        r=0;
                        break;
                     }
                              
                 }
                      
             }
             
             
             if(r==1){
                for(int k=0;k<x;k++){
                    for(int q=0;q<y;q++){
                        if(pec[k][q] =='#')tab[k+i][q+j]='#';
                    }
                }
             
             }      
                            
        }
    }
    
    
     for(int i=0;i<a;i++){
        for(int j=0;j<l;j++){
            printf("%c", tab[i][j]);   
        }
        printf("\n");
     }
    
    
    if(r==0){
        printf("Fim de jogo\n");
    
    }
    else{
       printf("O jogo deve continuar\n");
    }
    
    
    
    
    
   
    
  
    
  return 0;
}