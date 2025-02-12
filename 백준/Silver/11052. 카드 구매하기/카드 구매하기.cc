#include <bits/stdc++.h>

using namespace std;

int n,m;

int arr[1002];

int dp[1002];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i]; 
    }
    dp[1] = arr[1];
    for(int i = 2; i <= n; i++){
        for(int j = 1; i-j >= j; j++){
            
            int temp = max(arr[i],dp[i-j]+dp[j]);
            if(temp > dp[i])
                dp[i] = temp;
        }
    }

    cout << dp[n];


    return 0;
}