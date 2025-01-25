#include <bits/stdc++.h>

using namespace std;

bool chk_1[40];
bool chk_2[40];
bool chk_3[40];

int n,ans;

void fx(int k){

    if(k == n){
        ans ++;
        return;
    }

    for(int i = 0; i < n; i++){

        if(chk_1[i])
            continue;
        if(chk_2[i+k])
            continue;
        if(chk_3[i-k+n-1])
            continue;
        chk_1[i] = 1;
        chk_2[i+k] = 1;
        chk_3[i-k+n-1] = 1;
        fx(k+1);
        chk_1[i] = 0;
        chk_2[i+k] = 0;
        chk_3[i-k+n-1] = 0;
        
    }

    
}

int main() {

cin >> n;
fx(0);

cout << ans;


    return 0;
}