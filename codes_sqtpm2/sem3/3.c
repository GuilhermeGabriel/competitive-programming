#include <stdio.h>
#include <string.h>

int main(){
	char s[3][100];
	char tmp[100];

	scanf("%s%s%s",s[0],s[1],s[2]);

	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(strcmp(s[i],s[j])>0){
				strcpy(tmp,s[j]);
				strcpy(s[j],s[i]);
				strcpy(s[i],tmp);
			}
		}
	}

	printf("%s%s%s\n",s[0],s[1],s[2]);

	return 0;
}