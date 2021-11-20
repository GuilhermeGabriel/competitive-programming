#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[100];
	scanf("%s",name);

	FILE *arq = fopen(name, "wb");

	if(arq == NULL){
		perror("Erro");
		return 1;
	}

	int n;scanf("%d",&n);
	int vet[n];
	for(int i=0;i<n;i++){
		scanf("%d",&vet[i]);
	}
	
	fwrite(&vet[0],sizeof(int),n,arq);
	fclose(arq);	

	return 0;
}