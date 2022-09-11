#include "bits/stdc++.h"
using namespace std;

int main(){
  int mat[9][9];
  int somaslinhas[9];
  int somascolunas[9];

  int linhas[10][10];  
  int colunas[10][10];  

  int n,k=1;cin>>n;
  while(n--){
    memset(linhas,0,sizeof(linhas));
    memset(colunas,0,sizeof(colunas));

    int atual;
    bool possible=true;

    for(int i=0;i<9;i++){
      for(int j=0;j<9;j++){
        cin>>atual;
        mat[i][j]=atual;

        linhas[i][atual]+=1;
        colunas[j][atual]+=1;
      }
    }

    for(int i=0;i<=9;i++){
      for(int j=0;j<=9;j++){
        if(linhas[i][j]>1||colunas[i][j]>1)
          possible=false;
        // cout<<linhas[i][j];
      }
      // cout<<'\n';
    }
    // return 0;

    // for(int i=0;i<9;i++){
    //   if(somaslinhas[i]!=45||somascolunas[i]!=45){
    //     possible=false;
    //     break;
    //   } 
    // }
    
    int m=0,n=0,c=0;
    while(c<9){
      int soma=0;
      for(int i=m;i<m+3;i++){
        for(int j=n;j<n+3;j++){
          soma+=mat[i][j];
        }
      }

      if(soma!=45){
        possible=false;
      }

      c++;
      n+=3;
      if(n==9){
        m+=3;
        n=0;
      }

    }

    cout<<"Instancia "<<k++<<'\n';
    if(possible){
      cout<<"SIM"<<'\n';
    }else{
      cout<<"NAO"<<'\n';
    }

    cout<<'\n';
  }


  return 0;
}
