#include <stdio.h>

typedef struct Pessoa {
	int idade,quant_livros;
	char sexo; //[h/m](minusculo)
} Leitor;

int main(){
	int quant_pessoas_entr=0;
	int quant_pessoas_n_leram=0;
	int quant_mulheres_3_livr_ou_mais=0;
	int total_livros_lidos=0;
	Leitor leitores[10000],aux;

	while(aux.idade>=0){
		printf("Qual a sua idade?\n");
		scanf("%d",&aux.idade);if(aux.idade<0)break;

		printf("Qual a seu sexo? [h/m](minusculo)\n");
		scanf(" %c",&aux.sexo);

		printf("Qual a quantidade de livros que voce leu em 2013?\n");
		scanf("%d",&aux.quant_livros);

		if(aux.sexo=='m'&&aux.quant_livros>=3)quant_mulheres_3_livr_ou_mais++;
		if(aux.quant_livros==0)quant_pessoas_n_leram++;
		quant_pessoas_entr++;
		total_livros_lidos+=aux.quant_livros;
	}

	printf("A quantidade de pessoas entrevistadas foi: %d pessoas\n", quant_pessoas_entr);
	printf("A quantidade de mulheres que leram 3 livros ou mais foi: %d mulheres\n",quant_mulheres_3_livr_ou_mais);
	printf("A media de livros livros por pessoa: %.2lf por pessoa\n",(total_livros_lidos/quant_pessoas_entr*1.0));
	printf("O porcentual de pessoas que nao leram livros: %.2lf%% \n",(quant_pessoas_n_leram*100.0/quant_pessoas_entr));

	return 0;
}