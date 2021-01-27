#include <bits/stdc++.h>
#include <set> //Biblioteca do set

using namespace std;

int main(){
    set<int> S; //Cria uma variável do tipo set para armazenar números inteiros

    S.insert(7); //Adiciona o elemento 7 no set
    S.insert(10); //Adiciona o elemento 10 no set
    S.insert(3); //Adiciona o elemento 3 no set

    for (set<int>::iterator it=S.begin(); it!=S.end(); ++it){
      cout << *it << " ";
    }
    cout<<"\n";
}