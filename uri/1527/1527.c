#include <stdio.h>

int pai[100100],pesos[100100],pontos[100100];

int find(int x){
	if(pai[x]==x)return x;
	return pai[x]=find(pai[x]);
}

void join(int a,int b){
	a=find(a);
	b=find(b);

	if(a==b)return;
	if(pesos[a]>pesos[b]){
		pai[b]=a;
		pontos[a]+=pontos[b];
	}

	if(pesos[a]<pesos[b]){
		pai[a]=b;
		pontos[b]+=pontos[a];
	}
	
	if(pesos[a]==pesos[b]){
		pai[a]=b;
		pesos[b]++;
		pontos[b]+=pontos[a];
	}	
}

int main(){
	int n,m,q,a,b,v=0;

	while(scanf("%d%d", &n, &m)&&n||m){
		for(int i=1;i<=n;i++){
			pai[i]=i;
			scanf("%d", &pontos[i]);
		}

		while(m--){
			scanf("%d%d%d", &q, &a, &b);

			if(q==1){
				join(a,b);
			}else{
				int pR=find(1);
				int pA=find(a);
				int pB=find(b);

				if(pontos[pA]>pontos[pB]){
					if(pA==pR)v++;
					continue;
				}

				if(pontos[pA]<pontos[pB]){
					if(pB==pR)v++;	
					continue;
				}
			}
		}

		printf("%d\n", v);
		v=0;
		for(int i=0;i<n;i++){
			pai[i]=0;
			pontos[i]=0;
			pesos[i]=0;
		}
	}

	return 0;
}
