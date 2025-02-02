#include <bits/stdc++.h>

using namespace std;

int n,m;

int arr[101][101];


int visited[101];

queue <int> q;
vector<vector<int>> vt(101) ;  // 경로를 bfs 로 다돌리고 해야하나?

void BFS(int k){
    
        for(int i = 0; i < vt[k].size();i++){
            q.push(vt[k][i]);   
        }

        int g = q.front();

    while(!q.empty()){
        
        g = q.front();

        arr[k][g] = 1;


        for(int i = 0; i < vt[g].size();i++){
            if(!arr[k][vt[g][i]])
            q.push(vt[g][i]);        
        }
        q.pop();

    }


}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int temp = 0;
            cin >> temp;
            if(temp == 1){
                vt[i].push_back(j);
            }

        }
    }
    
    for(int i = 0; i < n; i++){
            BFS(i);
    }

     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}