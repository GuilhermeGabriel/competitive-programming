#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int main(){
	auto start = high_resolution_clock::now();

	ios_base::sync_with_stdio(false);cin.tie(nullptr);

	for(int i=0;i<10000;i++)
		for(int j=0;j<10000;j++);
	
	auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
 
  cout << "Time taken by function: "
  << duration.count() << " microseconds" << endl;

	return 0;
}