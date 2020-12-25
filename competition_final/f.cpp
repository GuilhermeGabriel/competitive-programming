#include <bits/stdc++.h>

using namespace std;

int main() {
  string line;
  getline(cin, line);

  int pontE = 0 , pontD = 0;
  int jogosE = 0, jogosD = 0;

  int saque = 0;
  
  for(int i = 0; i < line.length(); i++){
    char c = line[i];

    if(c == 'S'){
      
      if(saque == 0){
        pontE++;

        if((pontE >= 5 && pontE-pontD>= 2) || pontE >= 10){
          jogosE++;
          pontE = 0;
          pontD = 0;
        }
        
      } 
      
      if(saque == 1){
        pontD++;

        if((pontD >= 5 && pontD-pontE >= 2) || pontD >=10){
          jogosD++;
          pontE = 0;
          pontD = 0;
        }
      }
    }

    if(c == 'R'){
      
      if(saque == 0){
        pontD++;
        saque = 1;
      
        
        if((pontD >= 5 && pontD-pontE>= 2) || pontD >= 10){
          jogosD++;
          saque = 1;
          pontE = 0;
          pontD = 0;
        }
        continue;
      }

      if(saque == 1){
        pontE++;
        saque = 0;

        if((pontE >= 5 && pontE-pontD >= 2) || pontE >=10){
          jogosE++;
          saque = 0;
          pontE = 0;
          pontD = 0;
        }
      }
      
    }

    if(c == 'Q'){
      
      if(jogosE >= 2){
        printf("%d (winner) - %d\n", jogosE, jogosD);
      
      }else if(jogosD >= 2){
        printf("%d - %d (winner)\n", jogosE, jogosD);
      
      } else{
        if(saque == 0){
           printf("%d (%d*) - %d (%d)\n", jogosE, pontE, jogosD, pontD);
        }else{
           printf("%d (%d) - %d (%d*)\n", jogosE, pontE, jogosD, pontD);
        }
      }
    }
  }

}