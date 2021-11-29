#include "bits/stdc++.h"
using namespace std;

int n,m,inx,iny;
vector<char> path;
char arr[1001][1001];
char d[1001][1001];
bool vis[1001][1001];

bool valid(int x,int y){
  if(x<1||x>n||y<1||y>m)return false;
  if(arr[x][y]=='#'||vis[x][y]==true)return false;
  return true;
}

bool bfs(int x,int y){
  queue<pair<int,int>> q;
  q.push({x,y});
  vis[x][y]=true;

  while(!q.empty()){
    int a=q.front().first;
    int b=q.front().second;
    q.pop();

    if(arr[a][b]=='B'){
      while(1){
        path.push_back(d[a][b]);

        if(path.back()=='L')b++;
        if(path.back()=='R')b--;
        if(path.back()=='U')a++;
        if(path.back()=='D')a--;
        
        if(a==inx&&b==iny)break;
      }
      return true;
    }

    //Left
    if(valid(a,b-1))d[a][b-1]='L',q.push({a,b-1}),vis[a][b-1]=true;

    //Right
    if(valid(a,b+1))d[a][b+1]='R',q.push({a,b+1}),vis[a][b+1]=true;

    //UP
    if(valid(a-1,b))d[a-1][b]='U',q.push({a-1,b}),vis[a-1][b]=true;

    //DOWN
    if(valid(a+1,b))d[a+1][b]='D',q.push({a+1,b}),vis[a+1][b]=true;
  }

  return false;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin>>n>>m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin>>arr[i][j];
      if(arr[i][j]=='A')inx=i,iny=j;
    }
  }

  if(bfs(inx,iny)){
    cout<<"YES"<<'\n';
    cout<<path.size()<<'\n';
    while(path.size()>0)cout<<path.back(), path.pop_back();
    cout<<'\n';
  }else{
    cout<<"NO"<<'\n';
  }

  return 0;
}