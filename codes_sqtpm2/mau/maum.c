#include <stdio.h>

int soma(double a, double b){
	return a+b;
}

int main(){
	double d,e,s;

	scanf("%lf %lf",&d,&e);
	
	s=soma(d,e);

	printf("%.1lf\n",s);
	
	return 0;
}