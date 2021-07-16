#include "bits/stdc++.h"

using namespace std;

int sum[5][5];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int grid[5][5]={
		{3,7,9,2,7},
		{9,8,3,5,5},
		{1,7,9,8,5},
		{3,8,6,4,10},
		{6,3,9,7,8}
	};

	int n=5;
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			sum[x][y]=max(sum[x-1][y],sum[x][y-1])+grid[x][y];
		}
	}
	cout<<sum[4][4];


	return 0;
}