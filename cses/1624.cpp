#include <bits/stdc++.h>
using namespace std;

#define T 8
int l=8,c=8,quant=0;

bool is_safe(int m, int n, int board[T][T]){
  int i,j;
  for(i=0;i<=n;i++)
    if(board[m][i])
      return false;

  for(i=m,j=n;i>=0&&j>=0;i--,j--)
    if(board[i][j])
      return false;

  for(i=m,j=n;i<l&&j>=0;i++,j--)
    if(board[i][j])
      return false;
  
  return true;
}

void solve(int board[T][T], int board_imp[T][T], int col){
  if(col>=c){
    quant++;
    return;
  }
  for(int i=0;i<l;i++){
    if(board_imp[i][col]==1)continue;
    if(!is_safe(i,col,board))continue;
    board[i][col]=1;
    solve(board,board_imp,col+1);
    board[i][col]=0;
  }
}

int main(){
  int board[T][T];
  int board_pos_imp[T][T];

  char tmp;
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      board[i][j]=0;
      board_pos_imp[i][j]=0;
      cin>>tmp;
      if(tmp=='*')board_pos_imp[i][j]=1;
    }
  }

  solve(board,board_pos_imp,0);

  cout<<quant;

	return 0;
}

