#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1, n2, sum;
	string sum_s, sum_s_c;

	while(cin>>n1>>n2&&n1!=0&&n2!=0){
		sum=n1+n2;
		sum_s = to_string(sum);

		for(int i=0;i<sum_s.size();i++){
			if(sum_s[i]!='0') sum_s_c+=sum_s[i];
		}

		cout << sum_s_c << endl;
		sum_s_c="";
	}

	return 0;
}