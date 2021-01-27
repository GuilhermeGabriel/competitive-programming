#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b, bigN, minN, result; cin>>a>>b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	if(a.size()>b.size()){
		bigN=a;
		minN=b;
	}else {
		bigN=b;
		minN=a;
	}

	int n1, n2, sum, act, ext=0;
	string n;
	for(int i=0;i<bigN.size();i++){
		n1=bigN[i]-'0';

		if(i<minN.size()){
			n2=minN[i]-'0';
		}else{
			n2=0;
		}
		
		sum=n1+n2+ext;
		n = to_string(sum);

		if(sum>10){	
			ext=n[0];
			result+=n[1];
		}else if(sum==10){
			result+='0';
			ext=1;
		}else{
			result+=sum-'0';
		}
	}

	//reverse(result.begin(), result.end());
	cout << result << endl;

	return 0;
}
