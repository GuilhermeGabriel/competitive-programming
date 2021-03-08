#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t,tp,n,k,c=0,q1=0;cin>>t;
	while(t--){
		cin>>n>>k;		

		if((k*29)>n){
			tp=(k*29)%n;
			q1+=(k*29)/n;
		}else{
			tp=(k*29);
		}

		for(int i=0;i<tp;i++){
			c++;
			if(c==1)q1++;
			if(c==n)c=0;
		}

		cout<<q1<<" ";
		if(c==0) cout<<n<<"\n";
		else cout<<c+1<<"\n";
		
		q1=0;c=0;
	}

	return 0;
}

/*
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29
																									 1  2  3  4  5  6  7  8  9


1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29

																									 */
