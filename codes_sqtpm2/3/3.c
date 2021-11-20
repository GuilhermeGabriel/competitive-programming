#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ispc(char pc[30][200],char w[200],int npc){
	for(int i=0;i<npc;i++)
		if(strcmp(pc[i],w)==0)return 1;
	return 0;
}

char to_lower(char c){
	if(c>='A'&&c<='Z')return c+32;
	else return c;
}

int main(){
	int k,e;scanf("%d%d",&k,&e);
	char pc[30][200],dsc[30][200],dscw[30][200];

	for(int i=0;i<k;i++)
		scanf("%s",pc[i]);
	
	int r=0,idxw=0;
	for(int i=0;i<e;i++){
		scanf(" %[^\n]",dsc[i]);

		int qpc=0; char word[200];
		for(int j=0;j<=strlen(dsc[i]);j++){
			char c=to_lower(dsc[i][j]);

			if(isalpha(c))strncat(word,&c,1);
			else{
				while(!isalpha(dsc[i][j+1]))j++;
				if(ispc(pc,word,k))qpc++;
				word[0]='\0';
			}
		}	

		if(qpc>r){
			for(int d=0;d<30;d++)dscw[d][0]='\0';
			r=qpc;idxw=0;
			strcpy(dscw[idxw++],dsc[i]);
		}else if(qpc==r){
			strcpy(dscw[idxw++],dsc[i]);
		}
	}

	printf("Conjunto de desculpas:\n");
	for(int i=0;i<idxw;i++)
		printf("%s\n",dscw[i]);
	printf("\n");

	return 0;
}
