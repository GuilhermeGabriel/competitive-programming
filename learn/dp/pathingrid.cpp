#include "bits/stdc++.h"

using namespace std;

int grid[5][5]={
	{3,7,9,2,7},
	{9,8,3,5,5},
	{1,7,9,8,5},
	{3,8,6,4,10},
	{6,3,9,7,8}
};
int memo[5][5];

int sum(int x, int y){
	if(x<0||y<0)return 0;
	if(memo[x][y])return memo[x][y];
	memo[x][y]=max(sum(x,y-1),sum(x-1,y))+grid[x][y];
	return memo[x][y];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cout<<sum(4,4);	

	return 0;
}