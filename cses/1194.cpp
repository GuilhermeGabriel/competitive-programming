#include "bits/stdc++.h"
using namespace std;
 
int n,m,sx,sy,dis[1005][1005];
char mat[1005][1005],dir[1005][1005],tmp;
vector<pair<int,int>> mons;
vector<char> path;
 
bool isvalid(int x,int y,int d){
  if(x<1||x>n||y<1||y>m)return false;
  if(mat[x][y]=='#'||dis[x][y]<=d||mat[x][y]=='M')return false;
  return true;
}
 
bool bfs(int x,int y,int t){
  queue<pair<int,int>> q;
  q.push({x,y});
  dis[x][y]=1;
      
  while(!q.empty()){
    int a=q.front().first;
    int b=q.front().second;
    int d=dis[a][b];
    q.pop();

    if(t==1&&(a==1||a==n||b==1||b==m)){
      //path.push_back(dir[a][b]);
      while(dir[a][b]!='#'){
        path.push_back(dir[a][b]);
        if(dir[a][b]=='L'){b++;continue;}
        if(dir[a][b]=='R'){b--;continue;}
        if(dir[a][b]=='U'){a++;continue;}
        if(dir[a][b]=='D'){a--;continue;}
        if((a==sx&&b==sy))break;
      }
      return true;
    }

    if(isvalid(a-1,b,d+1)){
      q.push({a-1,b});
      if(t==1)dir[a-1][b]='U';
      dis[a-1][b]=d+1;
      continue;
    }
    if(isvalid(a+1,b,d+1)){
      q.push({a+1,b});
      if(t==1)dir[a+1][b]='D';
      dis[a+1][b]=d+1;
      continue;
    }
    if(isvalid(a,b-1,d+1)){
      q.push({a,b-1});
      if(t==1)dir[a][b-1]='L';
      dis[a][b-1]=d+1;
      continue;
    }
    if(isvalid(a,b+1,d+1)){
      q.push({a,b+1});
      if(t==1)dir[a][b+1]='R';
      dis[a][b+1]=d+1;
      continue;
    }

    return false;
  }
 
  return false;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  memset(dis,0x3f,sizeof(dis));
 
  cin>>n>>m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin>>tmp;mat[i][j]=tmp;
      if(tmp=='A')sx=i,sy=j;
      if(tmp=='M')mons.push_back({i,j});
      dir[i][j]='#';
    }
  }
 
  for(auto m:mons)
    bfs(m.first,m.second,0);
  
  if(bfs(sx,sy,1)){
    cout<<"YES"<<'\n';
    cout<<path.size()<<'\n';
    while(path.size()>0)cout<<path.back(),path.pop_back();
    cout<<'\n';
  }else cout<<"NO"<<'\n';  
  
  /*for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      // if(dis[i][j]>10000)cout<<'#'<<"  ";
      // else cout<<dis[i][j]<<"  ";
      cout<<dir[i][j];
    }
    cout<<'\n';
  }*/
 
  return 0;
}