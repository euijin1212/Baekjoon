#include <bits/stdc++.h>

using namespace std;

int n;

int ans;

int visited[5001];

void BFS(int k){

    queue <int> q;

    q.push(k);

    visited[k] = 0;

    while(!q.empty()){

        int temp = q.front();
        q.pop();


        if(temp+3 == n){
            visited[temp+3] = visited[temp]+1;
            break;
        }
        if(temp+3 < n && visited[temp+3] == -1 ){
            visited[temp+3] = visited[temp]+1;
            q.push(temp+3);
            q.push(temp+5);
        }


        if(temp+5 == n){
            visited[temp+5] = visited[temp]+1;
            break;
        }
        if(temp+5 < n && visited[temp+5] == -1){
            visited[temp+5] = visited[temp]+1;
            q.push(temp+3);
            q.push(temp+5);
        }
    }
    return;
}


int main(){
    
    cin >> n; 

    fill(visited,visited+5001,-1);

    BFS(0);

    cout << visited[n];

    return 0;
}