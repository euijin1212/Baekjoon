#include <bits/stdc++.h>

using namespace std;

int n,m;

char arr[601][601];
bool visited[601][601];
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int X,Y,ans;

queue <pair<int,int>> q;

void BFS(){

    while(!empty(q)){

        X = q.front().first;
        Y = q.front().second;
        q.pop();

        for(int dir = 0; dir < 4; dir++){ // 상하좌우
            int n_x = X +dx[dir];
            int n_y = Y +dy[dir];  
        

            if(n_x >= n or n_y >= m or n_x < 0 or n_y < 0){
                continue;
            }
            if(visited[n_x][n_y] == 1){
                continue;
            }
            if(arr[n_x][n_y] == 'X'){
                continue;
            }
            visited[n_x][n_y] = 1;
            if(arr[n_x][n_y] == 'P'){
                ans++;
            }
            q.push(make_pair(n_x,n_y));

        }



    }



}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'I'){
                q.push({i,j});
                visited[i][j] = 1;
                }
        }
    }
    BFS();

    if(ans == 0){
        cout << "TT";
    }
    else{
        cout << ans;
    }
    return 0;

}