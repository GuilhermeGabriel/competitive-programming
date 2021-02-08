#include <stdio.h>
#include <stdlib.h>

int main(){
	long long a,b,r;

	while(scanf("%lld%lld",&a,&b)!=EOF){
		r=llabs(b-a);
		printf("%lld\n", r);
	}

	return 0;
}