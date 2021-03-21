#include <iostream>

using namespace std;

int main(){
  int s,e,q=0;

  //int *v=(int*)malloc(5*sizeof(int));

  while(cin>>s>>e){
  	for(int n=s;n<=e;n++){
  		while(n!=1){
	  		q++;
	  		cout<<n;
	  		/*if(n==1){
	  			cout<<s<<" "<<e<<" "<<q<<"\n";
	  			q=0;return 0;
	  		}*/
	  	
	  		if(n%2!=0)n=3*n+1;
	  		else n/=2;
	  	}
  	}
 	}

	return 0;
}