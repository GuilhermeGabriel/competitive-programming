#include <stdio.h>
#include <stdlib.h>

int main(){
	int *c=(int*)malloc(100*sizeof(int));
	printf("%lu\n",(sizeof(c)/sizeof(c[0])));
	return 0;
}