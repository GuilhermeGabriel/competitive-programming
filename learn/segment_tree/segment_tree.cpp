#include <bits/stdc++.h>

using namespace std;

int arvore[100], acao[100];

void update(int no, int i, int j, int posicao, int novo_valor){
	if(i==j){
		arvore[no]=i;
		acao[posicao]=novo_valor;
	}else{
		int esq=2*no;
		int dir=2*no+1;

		int meio=(i+j)/2;
		if(posicao<=meio)update(esquerda,i,meio,posicao,novo_valor);
		else update(direita,meio+1,j,posicao,novo_valor);

		if(acao[arvore[esquerda]]<acao[arvore[direita]])arvore[no]=arvore[esquerda];
		else arvore[no]=arvore[direita];
	}
}

int query(int no, int i, int l, int r, int A, int B){
	if(A<=i&&j<=B)return arvore[no];
	if(i>B||j<A)return -1;

	int esquerda=2*no;
	int direita=2*no+1;
	int meio=(i+j)/2;

	int resposta_esq=query(esquerda,i,meio,A,B);
	int resposta_dir=query(direita,meio+1,j,A,B);
	
	if(resposta_esq==-1)return resposta_dir;
	if(resposta_dir==-1)return resposta_esq;

	if(acao[resposta_esq]<acao[resposta_dir])return resposta_esq;
	else return resposta_dir;
}

int main(){
	
	return 0;
}