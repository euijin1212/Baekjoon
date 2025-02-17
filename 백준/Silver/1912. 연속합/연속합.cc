#include <bits/stdc++.h>

using namespace std;

int n,m;

int arr[100001];
int dp[100001];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    m = -1000;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    dp[0] = arr[0];
    if(m < dp[0])
        m = dp[0];
    for(int i = 1; i < n; i++){
        dp[i] = max(arr[i],dp[i-1] +arr[i]);

        if(dp[i] > m){
            m = dp[i];
        }
    }

    cout << m;

    return 0;
}