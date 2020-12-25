#include <bits/stdc++.h>

using namespace std;

int is_ordered(vector<int> v){
	for(int i = 0; i<v.size()-1; i++){
		if(v[i] > v[i+1]) return false;
	}
	return true;
}

int main(){
	int n = -1;

	cin >> n;
	while(n != 0){
		vector<int> v_receive;

		for(int i=0; i<n; i++){
			int v;
			cin >> v;
			v_receive.push_back(v);

			if(v == 0) {
				break;
			}
		}

		if(v_receive[0] == 0){
			cin >> n;
			if(n == 0) break;
			cout << endl;
      continue;
		}

		vector<int> sub_vet, ordered_f;

		for(int i = n-1; i >= 0; i--){
			int value_atual = v_receive[i];
			int antecessor = v_receive[i-1];		

			sub_vet.push_back(value_atual);

			if(abs(value_atual - antecessor) != 1){
				sort(sub_vet.begin(), sub_vet.end());
				ordered_f.insert(ordered_f.begin(), sub_vet.begin(),sub_vet.end());
				sub_vet.clear();
			}
		}

    sort(sub_vet.begin(), sub_vet.end());
		ordered_f.insert(ordered_f.begin(), sub_vet.begin(),sub_vet.end());
    sub_vet.clear();

		string result = (is_ordered(ordered_f)) ? "Yes" : "No";
    cout << result << endl;
  }

	return 0;
}