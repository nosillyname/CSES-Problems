#include <bits/stdc++.h>
using namespace std;


int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void dfs(int i,int j,int n,int m,vector<vector<char>> & mp){
    if(i<0 || j<0 || i>=n || j>=m || mp[i][j]=='#'){
        return;
    }
    mp[i][j] = '#';
    for(int k=0;k<4;k++){
        int ni = i+dx[k];
        int nj = j+dy[k];
        dfs(ni,nj,n,m,mp);
    }
}

int main(){

    int n,m,count=0;
    cin>>n>>m;
    vector<vector<char>> mp(n,vector<char>(m,' '));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mp[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mp[i][j]=='.'){
                dfs(i,j,n,m,mp);
                count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}