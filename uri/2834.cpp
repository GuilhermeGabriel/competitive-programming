#include "bits/stdc++.h"

using namespace std;

int mat[12][12],matcp[12][12];
int in,n,m,xe,ye,xs,ys;
vector<pair<int,int>> pos;
int qm=0;

void resetp(int mat[12][12], int l, int c){
  mat[l+1][c]=0;
  mat[l-1][c]=0;
  mat[l][c+1]=0;
  mat[l][c-1]=0;
}

void gerador(int mat[12][12]){
  for(auto p: pos){
    qm++;
    for(int i=0;i<4;i++){
      resetp(mat,p.first,p.second);
      if(i==0){mat[p.first+1][p.second]=1;}
      if(i==1){mat[p.first-1][p.second]=1;}
      if(i==2){mat[p.first][p.second+1]=1;}
      if(i==3){mat[p.first][p.second-1]=1;}
      
      if(qm==pos.size()){
        for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
            cout<<mat[i][j];
          }
          cout<<'\n';
        }
        cout<<'\n';
        return;
      }

      gerador(mat);
    }
	}  
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n>>m>>xe>>ye>>xs>>ys;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			mat[i][j]=0;
			if(i%2==0&&j%2==0){
				mat[i][j]=1;
				matcp[i][j]=1;
				pos.push_back({i,j});
			}	
			cout<<mat[i][j];
		}
		cout<<'\n';
	}

	//for(auto p:pos)cout<<p.first<<" "<<p.second<<"\n";
	cout<<'\n';
  gerador(mat);

	return 0;
}
