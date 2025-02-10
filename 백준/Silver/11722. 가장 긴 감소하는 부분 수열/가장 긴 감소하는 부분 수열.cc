#include <bits/stdc++.h>

using namespace std;

int n,m;

int arr[1001];
int t[1001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    m = 0;

    for(int i = 0; i < n; i++){
        t[i] = 1;
        for(int j = 0; j < i; j++){
            if(arr[i] < arr[j] && t[j] + 1 > t[i]){
                t[i] = t[j] + 1;
            }
        }
        if(m < t[i])
             m = t[i];

    }

    cout << m;
    return 0;
}