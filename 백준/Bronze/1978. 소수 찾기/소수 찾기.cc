#include <bits/stdc++.h>

using namespace std;

int arr;

bool istrue[1001];

int N,ans;

int main() {

    cin >> N;
    istrue[1] = true;
    for(int i = 2; i <= 100; i++){
        int x = i+i;
        while(x <= 1000){
            istrue[x] = true;
            x += i;
        }
    }

    for(int i = 0; i < N; i++){
        cin >> arr;
        if(!istrue[arr])
            ans ++;
    }

    cout << ans;
    
    return 0;
}