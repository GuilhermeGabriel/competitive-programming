#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a;
	vector<char> num;

	while(cin>>n>>a&&n||a){
		cin.ignore();

		int ap=0;
		char r_atual;
		
		for(int i=0;i<n;i++){
			cin>>r_atual;
			
			while(!num.empty()&&ap<a&&r_atual>num.back()){
				num.pop_back();
				ap++;
			}

			if(num.size()<n-a)num.push_back(r_atual);
		}

		for(int i=0;i<num.size();i++)cout<<num[i];
		cout<<endl;
    num.clear();
  }
	
	return 0;
}