#include "bits/stdc++.h"
using namespace std;


int main() {

  int n,t,dir,tf=0,diratual=0,k=0;
  vector<int> direita, esquerda;

  cin >> n;  
  n--;
  k = n;
  cin>>t>>dir;
  tf=t+10;
  
  if(dir == 1){
    diratual = 1;
  }

  while(n--){
    cin>>t>>dir;

    if(dir == 1){
      direita.push_back(t);
    }else if(dir == 0){
      esquerda.push_back(t);
    }

  }
  int m=0;

  while(direita.size() >= 1 || esquerda.size() >= 1){
    
    if(diratual == 0){
      for(int i=0;i<esquerda.size(); i++){
        if(esquerda[i] <= tf){

          
          tf=esquerda[i]+10;
          

          esquerda.erase(esquerda.begin());
        }
        else{
          break;  
        }
            
      }
    
      diratual = 1;   
      if(direita.size()>0)tf+=10; 
    }
    
    if(diratual == 1){
     for(int i=0;i<direita.size(); i++){
        if(direita[i] <= tf){

       
        tf=esquerda[i]+10;
        
          
        direita.erase(direita.begin());
         
        }
        else{

          break;
        }
          
      }
      
      diratual = 0;
      if(esquerda.size()>0)tf+=10;
    }
  }
  
  cout << tf << endl;
  return 0; 
} 
