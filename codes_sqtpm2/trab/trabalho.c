#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef struct{
  int id,x,y,z;
} Ponto;

void limpaTerminal();
void mostraMenuDeOpcoes();
void mostrarSaida(char saida[10000]);
double distanciaEntreDoisPontos(Ponto a, Ponto b);
void inserirPonto(Ponto pontos[100], int idPonto);
void listarPontosSobrepostos(Ponto pontos[100], int quantidade);
void mostrarTodosPontos(Ponto pontos[100], int quantidade);
void mostrarDistanciaEntreDoisPontos(Ponto pontos[100],int quantidade);
void mostrarPontosMaisDistantesEMaisProximos(Ponto pontos[100], int quantidade);

int main(){
	Ponto pontos[100];

	limpaTerminal();
	mostraMenuDeOpcoes();

  int operacao=-1,contador=0;	
	do {
		printf("Escolha uma opção desejada: ");
		scanf("%d",&operacao);

		switch(operacao){
			case 1:{
				inserirPonto(pontos,contador++);
				break;
			}
			case 2:{
				listarPontosSobrepostos(pontos,contador);
				break;
			}
			case 3:{
				mostrarTodosPontos(pontos,contador);
				break;
			}
			case 4:{
				mostrarDistanciaEntreDoisPontos(pontos,contador);
				break;
			}
			case 5:{
				mostrarPontosMaisDistantesEMaisProximos(pontos,contador);
				break;
			}
			case 6:{
				printf("Programa encerrado!\n");
				break;
			}
			default:{
				mostrarSaida("> Insira uma opção válida!\n");
				operacao=-1;
				break;
			}
		}

	} while (operacao!=6);

	return 0;
}


void limpaTerminal(){
	printf("\e[1;1H\e[2J");//todos
	//system("clear");//linux
	//system("cls");//windows
}

void mostraMenuDeOpcoes(){
	printf("********************************************************\n");
	printf("[1] - Inserir um ponto\n");
	printf("[2] - Listar pontos que se sobrepõe.\n");
	printf("[3] - Mostrar todos os pontos cadastrados.\n");
	printf("[4] - Mostrar a distancia euclidiana entre dois pontos.\n");
	printf("[5] - Mostrar par de pontos mais distantes e mais próximos.\n");
	printf("[6] - Sair");
	printf("\n********************************************************\n");
}

void mostrarSaida(char saida[10000]){
	limpaTerminal();
	mostraMenuDeOpcoes();
	printf("\n%s",saida);
	printf("\n********************************************************\n");
}

double distanciaEntreDoisPontos(Ponto a, Ponto b){
	return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2)+pow(b.z-a.z,2));
}

void inserirPonto(Ponto pontos[100], int idPonto){
	int x,y,z;

	if(idPonto>=100){
		mostrarSaida("> Você pode inserir no máximo 100 pontos!\n");
		return;
	}

	printf("Digite o x, y e z do ponto: ");
	scanf("%d %d %d",&x,&y,&z);
	
	Ponto aux={idPonto,x,y,z};
	pontos[idPonto]=aux;

	mostrarSaida("> Inserido com sucesso!\n");
}

void listarPontosSobrepostos(Ponto pontos[100], int quantidade){
	Ponto a,b;
	int indicesJaContados[100],quantidadesSobrepostos=0;
	for(int i=0;i<100;i++)indicesJaContados[i]=-1;

	char saida[10000]="Pontos sobrepostos:\n",tmp[1000];
	for(int i=0;i<quantidade;i++){
		if(indicesJaContados[i]==1)continue;
		int listadoA=0;

		for(int j=i+1;j<quantidade;j++){
			if(indicesJaContados[j]==1)continue;

			a=pontos[i];					
			b=pontos[j];

			if(distanciaEntreDoisPontos(a,b)==0){
				if(listadoA==0){
					sprintf(tmp,"\n[%d](x:%d,y:%d,z:%d)\n",a.id,a.x,a.y,a.z);
					strcat(saida,tmp);
				}

				sprintf(tmp,"[%d](x:%d,y:%d,z:%d)\n",b.id,b.x,b.y,b.z);
				strcat(saida,tmp);

				listadoA=1;
				indicesJaContados[j]=1;
				quantidadesSobrepostos++;
			}
		}

		indicesJaContados[i]=1;
	}
	if(quantidadesSobrepostos==0)strcpy(saida,"> Nenhum ponto sobreposto!\n");
	mostrarSaida(saida);
}

void mostrarTodosPontos(Ponto pontos[100], int quantidade){
	if(quantidade==0){
		mostrarSaida("> Nenhum ponto foi inserido!\n");
		return;
	}

	char saida[10000],tmp[100]; saida[0]='\0';
	for(int i=0;i<quantidade;i++){
		Ponto ponto=pontos[i];
		sprintf(tmp,"> Ponto[%d] => x:%d y:%d z:%d\n",ponto.id,ponto.x,ponto.y,ponto.z);
		strcat(saida,tmp);
	}
	mostrarSaida(saida);
}

void mostrarDistanciaEntreDoisPontos(Ponto pontos[100],int quantidade){
	int idPontoA,idPontoB;
	printf("Digite os ids dos pontos para calcular distância: ");
	scanf("%d%d",&idPontoA,&idPontoB);

	if(idPontoA>=quantidade || idPontoB>=quantidade){
		mostrarSaida("> Você deve inserir ids de pontos já existentes!\n");
		return;
	}

	Ponto a=pontos[idPontoA], b=pontos[idPontoB];
	double distancia=distanciaEntreDoisPontos(a,b);
	char saida[1000];
	sprintf(saida,"> Distância entre os pontos [%d](x:%d,y:%d,z:%d) e [%d](x:%d,y:%d,z:%d): %.2lf unidades\n",a.id,a.x,a.y,a.z,b.id,b.x,b.y,b.z,distancia);
	mostrarSaida(saida);
}

void mostrarPontosMaisDistantesEMaisProximos(Ponto pontos[100], int quantidade){
	if(quantidade==0){
		mostrarSaida("> Não há nenhum ponto inserido!\n");
		return;
	}else if(quantidade==1){
		mostrarSaida("> Insira mais de 1 ponto para mostrar os mais distantes e mais próximos!\n");
		return;	
	}

	double distanciaAtual,menorDistancia=INT_MAX,maiorDistancia=-1;
	Ponto aMaiorDistancia,bMaiorDistancia,aMenorDistancia,bMenorDistancia;
	Ponto Aaux,Baux;

	for(int i=0;i<quantidade;i++){
		for(int j=i+1;j<quantidade;j++){
			Aaux=pontos[i]; Baux=pontos[j];
			distanciaAtual=distanciaEntreDoisPontos(Aaux,Baux);
			
			if(distanciaAtual>maiorDistancia){
				aMaiorDistancia=Aaux;
				bMaiorDistancia=Baux;
				maiorDistancia=distanciaAtual;
			}

			if(distanciaAtual<menorDistancia){
				aMenorDistancia=Aaux;
				bMenorDistancia=Baux;
				menorDistancia=distanciaAtual;
			}
		}
	}

	char saida[10000],tmp[1000];saida[0]='\0';
	sprintf(tmp,"Os pontos mais distantes são: [%d](x:%d,y:%d,z:%d) e [%d](x:%d,y:%d,z:%d)\n",
	aMaiorDistancia.id,aMaiorDistancia.x,aMaiorDistancia.y,aMaiorDistancia.z,
	bMaiorDistancia.id,bMaiorDistancia.x,bMaiorDistancia.y,bMaiorDistancia.z
	);
	strcat(saida,tmp);
	
	sprintf(tmp,"Os pontos mais próximos são: [%d](x:%d,y:%d,z:%d) e [%d](x:%d,y:%d,z:%d)\n",
	aMenorDistancia.id,aMenorDistancia.x,aMenorDistancia.y,aMenorDistancia.z,
	bMenorDistancia.id,bMenorDistancia.x,bMenorDistancia.y,bMenorDistancia.z
	);
	strcat(saida,tmp);

	mostrarSaida(saida);
}