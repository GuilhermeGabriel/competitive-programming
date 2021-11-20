#include <stdio.h>
#include <string.h>

int count(char t[1025],char mer[1025],int tamt,int tammer){
	int q=0;char mer1[1025];mer1[0]='\0';
	
	for(int i=0;i<=tamt-tammer;i++){
		for(int j=0;j<tammer+1;j++)
			strncat(mer1,&t[i+j],1);

		if(strcmp(mer,mer1)==0)q++;
		mer1[0]='\0';
	}
	return q;
}

int wascounted(char merscounted[1025][1025],char mer[1025]){
	for(int i=0;i<1025;i++)
		if(strcmp(merscounted[i],mer)==0)return 1;
	return 0;
}

int main(){
	int n; char t[1025],merscounted[1025][1025];
	char winmers[1025][1025];
	scanf("%s %d",t,&n);

	int tamt=strlen(t)-1,tammer=n-1;
	int idxmersw=0,idxmersc=0,r=0,q;
	char mer[1025];mer[0]='\0';

	for(int i=0;i<=tamt-tammer;i++){
		for(int j=0;j<n;j++)
			strncat(mer,&t[i+j],1);
		
		if(wascounted(merscounted,mer)){
			mer[0]='\0';
			continue;
		}
		
		strcpy(merscounted[idxmersc++],mer);
		
		q=count(t,mer,tamt,tammer);
		if(q>r){
			for(int i=0;i<1025;i++)winmers[i][0]='\0';
			idxmersw=0;r=q;
			strcpy(winmers[idxmersw++],mer);
		}else if(q==r)
			strcpy(winmers[idxmersw++],mer);

		mer[0]='\0';
	}

	for(int i=0;i<idxmersw;i++)
		printf("%s ",winmers[i]);
	printf("\n");

	return 0;
}