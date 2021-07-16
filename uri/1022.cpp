#include "bits/stdc++.h"

using namespace std;

int mdc(int num1, int num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;cin>>n;
	int N1,D1,N2,D2,d;
	char op,l;

	while(n--){
		cin>>N1>>l>>D1>>op>>N2>>l>>D2;
		
		if(op=='+'){
			cout<<(N1*D2 + N2*D1)<<'/'<<(D1*D2);
			d=mdc((N1*D2 + N2*D1),(D1*D2));
			cout<<" = "<<(N1*D2 + N2*D1)/d<<'/'<<(D1*D2)/d;
		}
		else if(op=='-'){
			cout<<(N1*D2 - N2*D1)<<'/'<<(D1*D2);
			d=mdc((N1*D2 - N2*D1),(D1*D2));
			cout<<" = "<<(N1*D2 - N2*D1)/abs(d)<<'/'<<(D1*D2)/abs(d);
		}
		else if(op=='*'){
			cout<<(N1*N2)<<'/'<<(D1*D2);
			d=mdc((N1*N2),(D1*D2));
			cout<<" = "<<(N1*N2)/d<<'/'<<(D1*D2)/d;
		}
		else if(op=='/'){
			cout<<(N1*D2)<<'/'<<(N2*D1);
			d=mdc((N1*D2),(N2*D1));
			cout<<" = "<<(N1*D2)/d<<'/'<<(N2*D1)/d;
		}
		cout<<'\n';
	}
	
	return 0;
}