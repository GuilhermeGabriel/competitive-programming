#include <bits/stdc++.h>

using namespace std;

struct Interval {
	int s, e;
};

bool orderStar(Interval i1, Interval i2){
	return i1.s < i2.s;
}

int main(){
	int P, S;
	Interval tmp;
	vector<Interval> intervals;

	int index = 1;
	while(cin>>P>>S&&P!=0&&S!=0){
		while(S--){
			cin >> tmp.s >> tmp.e;
			intervals.push_back(tmp);
		}

		sort(intervals.begin(), intervals.end(), orderStar);

		cout << "Teste " << index++ << endl;
		int start = intervals[0].s, end=intervals[0].e;

		for(int i=1; i<intervals.size(); i++){
			if(intervals[i].s>end){
				cout<<start<<" "<<end<<"\n";
				start=intervals[i].s;
				end=intervals[i].e;
			}else if(intervals[i].e>end){
				end=intervals[i].e;
			}
		}
		cout<<start<<" "<<end<<"\n\n";

		intervals.clear();
	}

	return 0;
}