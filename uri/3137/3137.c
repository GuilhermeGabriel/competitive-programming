#include <stdio.h>

int main(){
	int p, i, quant = 0;
	scanf("%d", &p);

	for(i=1; i<=p; i++){
		string n = to_string(i);
		quant += trunc(log10(i)) + 1;
	}
	
	printf("%d\n", quant);

	return 0;
}