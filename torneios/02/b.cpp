#include <bits/stdc++.h>
using namespace std;

#define T 10
int m,n,quant=0;

bool is_safe(int board[T][T], int i, int j){
  if(board[i-2][j-1]==1||board[i-2][j-1]==-1)return false;
  if(board[i-2][j+1]==1||board[i-2][j+1]==-1)return false;
  if(board[i+2][j-1]==1||board[i+2][j-1]==-1)return false;
  if(board[i+2][j+1]==1||board[i+2][j+1]==-1)return false;

  if(board[i-1][j+2]==1||board[i-1][j+2]==-1)return false;
  if(board[i+1][j+2]==1||board[i-1][j+2]==-1)return false;
  if(board[i-1][j-2]==1||board[i-1][j-2]==-1)return false;
  if(board[i+1][j-2]==1||board[i+1][j-2]==-1)return false;
  return true;
}

void solve(int board[T][T], int col){
  if(col==m){

    for(int i=0;i<T;i++){
      for(int j=0;j<T;j++){
        cout<<board[i][j];
      }
      cout<<'\n';
    }
    cout<<'\n';

    return;
  }

  for(int i=2;i<n+2;i++){
    if(!is_safe(board,i,col))continue;
    board[i][col]=1;
    solve(board,col+1);
    board[i][col]=0;
  }
}

int main(){
  int board[T][T];
  cin>>m>>n;

  for(int i=0;i<T;i++){
    for(int j=0;j<T;j++){
      board[i][j]=-1;
    }
  }

  for(int i=2;i<m+2;i++){
    for(int j=2;j<n+2;j++){
      board[i][j]=0;
    }
  }

  solve(board,2);

  for(int i=0;i<T;i++){
    for(int j=0;j<T;j++){
      cout<<board[i][j];
    }
    cout<<'\n';
  }

  /*
  while(cin>>n>>m, (n!=0 && m!=0)){
    
  }*/


  return 0;
}