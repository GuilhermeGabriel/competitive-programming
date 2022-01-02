#include <stdio.h>
#include <math.h>

int main(){
	double n, l, r; scanf("%lf",&n);

	while(n--){
		scanf("%lf",&l);
		r = (5*l*l)/(4*sqrt(5-2*sqrt(5)));
    printf("%.3lf\n",r);
	}

	return 0;
}