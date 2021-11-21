#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int record_tentativas=0, record_resultado=0;
int jogos_jogados=0;

void mostra_menu(){
	printf("1. Novo jogo\n");
	printf("2. Ver record\n");
	printf("3. Limpar record\n");
	printf("4. Sair\n");
}

int sorteia_0_100(){
	srand(time(NULL));
	int x = rand() % 100;
	return x;
}

void inicia_novo_jogo(){
	printf("Novo jogo iniciado!\n");
	printf("Tente adivinhar um numero de 0 - 100:\n");

	int tentativas_feitas=0;
	int numero_sorteado=sorteia_0_100();
	int numero_digitado=-1;

	while(numero_digitado!=numero_sorteado){
		scanf("%d",&numero_digitado);
		tentativas_feitas++;

		if(numero_digitado>numero_sorteado){
			printf("Muito alto! Tente um valor mais baixo!\n");
		} else if(numero_digitado<numero_sorteado){
			printf("Muito baixo! Tente um valor mais alto!\n");
		}
	}

	jogos_jogados++;

	if(jogos_jogados==1){
		record_tentativas=tentativas_feitas;
		record_resultado=numero_sorteado;
	}else{
		if(tentativas_feitas<record_tentativas){
			record_tentativas=tentativas_feitas;

			if(100-numero_sorteado<100-record_resultado){
				record_resultado=numero_sorteado;
			}
		}
	}

	printf("Parabens! Voce acertou depois de %d tentativas!\n", tentativas_feitas);
}

void mostra_recorde(){
	if(jogos_jogados==0){
		printf("Record - Tentativas: - Numero Sorteado:\n");
	}else{
		printf("Record - Tentativas: %d - Numero Sorteado: %d\n", record_tentativas, record_resultado);
	}
}

void limpa_recorde(){
	jogos_jogados=record_tentativas=record_resultado=0;
	printf("Record Zerado!\n");
}

int main(){
	printf("Bem-vindo ao jogo da adivinhacao!!!\n");
	int estado=1;char opcao;
	
	while(estado==1){
		mostra_menu();
		scanf(" %c",&opcao);

		switch(opcao){
			case '1':
				inicia_novo_jogo();
				break;
			case '2':
				mostra_recorde();
				break;
			case '3':
				limpa_recorde();
				break;
			case '4':
				estado=0;
				break;
			default:
				printf("Essa opcao nao existe, escolha uma opcao do menu!\n");
				break; 
		}
	}

	system("exit");

	return 0;
}