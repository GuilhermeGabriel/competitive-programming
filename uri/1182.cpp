#include <stdio.h>

int main() {
    int i, j, col=0;
    double s=0, in;
    char op;
    
    scanf("%d", &col);
    scanf("\n%c", &op);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &in);
            if(col==j) s+=in;
        }
    }

    if ('S'==op){
        printf("%.1lf\n",s);
    }
    if ('M'==op){
        printf("%.1lf\n",s/12);
    }
}