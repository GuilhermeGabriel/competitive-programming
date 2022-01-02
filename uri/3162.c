#include <stdio.h>
#include <math.h>

#define min(a,b) (((a)<(b))?(a):(b))

int main(){
	int n,i=0;scanf("%d",&n);
	int p[n][3];
	
	for(int a=0;i<n;a++){
		scanf("%d%d%d",&p[i][0],&p[i][1],&p[i][2]);
    //cin>>p[i][0]>>p[i][1]>>p[i][2];
		i++;
	}

	for(int i=0;i<n;i++){
		double m=1e9;
		for(int j=0;j<n;j++){
			if(i==j)continue;
			m=min(m,
				sqrt(pow(p[i][0]-p[j][0],2)+
					pow(p[i][1]-p[j][1],2)+
					pow(p[i][2]-p[j][2],2)));
		}
		if(m<20)printf("A\n");//cout<<"A\n";
		else if(m>=20&&m<=50)printf("M\n");//cout<<"M\n";
		else printf("B\n");//cout<<"B\n";
	}

	return 0;
}