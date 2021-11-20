#include <stdio.h>

int main(){
	int vetor[][2]={{10,1},{20,2},{30,3}};
	int *p;
	p=&vetor[0][0];
	printf("%d\n",*p);
	return 0;
}